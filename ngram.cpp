/*******************************************************************************
 *                                                                             *
 *       Filename:  ngram.cpp                                                  *
 *                                                                             *
 *    Description:  N-Gram analyzer for arbitrary files                        *
 *                                                                             *
 *        Version:  1.0                                                        *
 *        Created:  02/19/2016 03:30:40 PM                                     *
 *       Revision:  none                                                       *
 *         Author:  Theodore Ahlfeld (twa2108)                                 *
 *       Compiler:  gcc                                                        *
 *                                                                             *
 *   Organization:                                                             *
 *                                                                             *
 ******************************************************************************/

#include <iostream>
#include <unordered_map>
#include <vector>

static const int BUFSIZE = 4096;


void die_with_err(const char *s)
{
    perror(s);
    exit(1);
}

void print_help(const char *s)
{
    printf("Usage:\n\t"
                   "%s ngram_size sliding_window_size input_file output_file\n"
                   "\tExample:\n\t"
                   "%s 3 2 inputfile.ext outputfile.ext\n", s, s);
}

int add_item_to_map(std::unordered_map<int, size_t> *map, const int val)
{
    int count;
    auto it = map->find(val);
    if(it == map->end()) {
        map->insert(std::pair<int, size_t>(val, 1));
        count = 1;
    } else {
        count = ++(it->second);
    }
    return count;
}

void read_ngrams_from_file(std::unordered_map<int, size_t> *map,
                           const size_t n, const size_t slide, FILE *fp)
{
    char buffer[BUFSIZE];
    size_t len = 0, offset = 0;
    while((len = fread(buffer+offset, 1, sizeof(buffer)-offset, fp))) {
        const char *s = buffer;
        len += offset;
        while(len >= n) {
            int val = 0;
            for(int i = 0; i < n; ++i) {
                val <<= 8;
                val |= s[i]&0xff;
            }
            add_item_to_map(map, val);
            s+=slide;
            len-=slide;
        }
        memcpy(buffer, s, offset=len);
    }
}

void print_val(const int val, const size_t n, FILE *fp)
{
    size_t size = n*2;
    fprintf(fp, "0x");
    for (int i = (int)(n-1); i>=0; i--) {
        fprintf(fp, "%02X", ((val&(0xff<<(8*i)))>>(8*i)));
    }
    for(;size > 0; size--) {
        fprintf(fp, " ");
    }
}

void write_ngrams_to_file(std::unordered_map<int,size_t>*map, FILE *fp,size_t n)
{
    size_t total = 0;
    int i = 0;
    std::vector<std::pair<size_t, int> > v =
            std::vector<std::pair<size_t, int> >(map->size());
    for(auto it = map->begin(); it!=map->end(); ++it) {
        total += it->second;
        v[i++] = std::pair<size_t, int>(it->second,it->first);
    }
    struct {
        bool operator() (const std::pair<size_t, int>& lhs,
                         const std::pair<size_t, int>& rhs) const{
            if(lhs.first == rhs.first) return lhs.second < rhs.second;
            return lhs.first > rhs.first;
        }
    } comp;
    std::sort(v.begin(), v.end(), comp);
    for(auto it = v.begin(); it != v.end(); ++it) {
        size_t amt = it->first;
        fprintf(fp, "%d:\t", i);
        print_val(it->second, n, fp);
        fprintf(fp,"\t\t%lu\t\t%f%%\n",amt,(((float)amt)/((float)total))*100.0);
    }
}

int main(int argc, char *argv[])
{
    if(argc<5) {
        print_help(argv[0]);
        exit(1);
    }
    int n = atoi(argv[1]);
    if(n<=0) {
        printf("Invalid ngram_size\n");
        print_help(argv[0]);
    }
    int s = atoi(argv[2]);
    if(s<=0 || s>n) {
        printf("Invalid sliding_window_size\n");
        print_help(argv[0]);
    }
    FILE *input_file = fopen(argv[3], "rb");
    if(input_file== nullptr) {
        die_with_err("fopen() failed on input file");
    }
    FILE *output_file = fopen(argv[4], "wb");
    if(output_file== nullptr) {
        die_with_err("fopen() failed on output file");
    }

    std::unordered_map<int, size_t> ngram_map =
            std::unordered_map<int, size_t>();
    read_ngrams_from_file(&ngram_map, (size_t)n, (size_t)s, input_file);
    fclose(input_file);
    write_ngrams_to_file(&ngram_map, output_file, (size_t)n);
    fclose(output_file);
    return 0;
}
