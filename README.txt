Prog1 n=1 slide=1
a.  prog1 was written in C++. This is easily noticeable due the C++ specific 
    library calls. It also load the library libstdc++.so.6

b.  Prog1 and Prog2 were both writing in C++, and use many of the same library
    calls from. libstdc++.so, libm.so, libgcc_s, libc.so. Therefore they share
    many of the same function calls. They have have 239 strings in common most
    of these are library calls, which hints at very similar functionality.

    Prog1 and Prog3 use the same libraries such as libstdc++.so, 
    ld-linux-x86-64.so and libm.so. They share a total of 63 shared strings.
    Half of these are library calls, and the other half is standard executables
    sections.

    Prog1 and Prog4 have the exact same strings in common as Prog1 and Prog3.

    Prog1 and Prog5 were written in different languages, one compiles to 
    bytecode and the other compiles to machine code. Neither are similar.

    Prog1 and Prog6 were written in different languages, one compiles to 
    an interpreted language and the other compiles to machine code. Neither 
    are similar.

c.
1:	00  		16631		27.533400%
2:	48  		3359		5.560982%
3:	ff  		3146		5.208351%
4:	5f  		1730		2.864096%
5:	89  		1710		2.830985%
6:	45  		1572		2.602520%
7:	53  		1026		1.698591%
8:	74  		1019		1.687002%
9:	8b  		888		1.470126%
10:	e8  		868		1.437015%
11:	61  		850		1.407215%
12:	49  		702		1.162194%
13:	72  		683		1.130739%
14:	c7  		659		1.091005%
15:	40  		658		1.089350%
16:	8d  		619		1.024783%
17:	65  		550		0.910551%
18:	69  		537		0.889029%
19:	31  		476		0.788040%
20:	63  		473		0.783074%


Prog1 n=2 slide=1
1:	0000    		12375		20.487732%
2:	ffff    		1670		2.764809%
3:	4889    		1597		2.643952%
4:	488b    		810		1.341015%
5:	ff48    		759		1.256581%
6:	89c7    		581		0.961889%
7:	c7e8    		581		0.961889%
8:	488d    		532		0.880766%
9:	8b45    		477		0.789709%
10:	4000    		439		0.726797%
11:	5374    		406		0.672163%
12:	0048    		401		0.663885%
13:	4953    		322		0.533095%
14:	005f    		316		0.523161%
15:	8d85    		291		0.481772%
16:	7249    		288		0.476805%
17:	5f5a    		270		0.447005%
18:	4545    		245		0.405616%
19:	0d00    		236		0.390716%
20:	0800    		229		0.379127%


Prog1 n=2 slide=2
1:	0000    		6506		21.542333%
2:	ffff    		1007		3.334327%
3:	4889    		819		2.711831%
4:	488b    		459		1.519817%
5:	4000    		376		1.244992%
6:	ff48    		371		1.228436%
7:	c7e8    		307		1.016523%
8:	488d    		274		0.907255%
9:	89c7    		274		0.907255%
10:	5374    		216		0.715208%
11:	0d00    		210		0.695341%
12:	8b45    		203		0.672163%
13:	0048    		195		0.645674%
14:	2200    		191		0.632429%
15:	0800    		185		0.612562%
16:	0e10    		166		0.549651%
17:	0041    		165		0.546340%
18:	430d    		164		0.543028%
19:	8602    		164		0.543028%
20:	1c00    		160		0.529784%


Prog1 n=3 slide=1
1:	000000      		9485		15.703383%
2:	ffff48      		734		1.215212%
3:	89c7e8      		581		0.961905%
4:	4889c7      		577		0.955282%
5:	488b45      		470		0.778133%
6:	ff4889      		333		0.551315%
7:	400000      		328		0.543037%
8:	488d85      		291		0.481780%
9:	000048      		277		0.458602%
10:	005f5a      		268		0.443701%
11:	ffffff      		249		0.412245%
12:	ff488d      		234		0.387411%
13:	080000      		226		0.374166%
14:	feffff      		221		0.365888%
15:	000d00      		208		0.344365%
16:	004889      		206		0.341054%
17:	5f5a4e      		204		0.337743%
18:	000022      		188		0.311253%
19:	002200      		187		0.309598%
20:	22000d      		183		0.302975%


Prog1 n=3 slide=2
1:	000000      		4058		13.436641%
2:	ffff48      		373		1.235058%
3:	400000      		328		1.086057%
4:	4889c7      		305		1.009900%
5:	89c7e8      		274		0.907255%
6:	488b45      		272		0.900632%
7:	000022      		188		0.622496%
8:	22000d      		183		0.605940%
9:	080000      		182		0.602629%
10:	ff4889      		169		0.559584%
11:	00410e      		164		0.543028%
12:	0e1086      		164		0.543028%
13:	430d06      		164		0.543028%
14:	860243      		164		0.543028%
15:	1c0000      		159		0.526473%
16:	00001c      		150		0.496672%
17:	488d85      		147		0.486739%
18:	000048      		146		0.483428%
19:	0c0708      		140		0.463561%
20:	ffffff      		139		0.460250%


Prog2 n=1 slide=1
a.  prog2 was written in C++. This is easily noticeable due the C++ specific 
    library calls. It also load the library libstdc++.so.6

b.  Prog1 and Prog2 were both writing in C++, and use many of the same library
    calls from. libstdc++.so, libm.so, libgcc_s, libc.so. Therefore they share
    many of the same function calls. They have have 239 strings in common most
    of these are library calls, which hints at very similar functionality.

    Prog2 and Prog3 use the same libraries such as libstdc++.so, 
    ld-linux-x86-64.so and libm.so. They share a total of 63 shared strings.
    Half of these are library calls, and the other half is standard executables
    sections.

    Prog2 and Prog4 have the exact same strings in common as Prog1 and Prog3.

    Prog2 and Prog5 were written in different languages, one compiles to 
    bytecode and the other compiles to machine code. Neither are similar.

    Prog2 and Prog6 were written in different languages, one compiles to 
    an interpreted language and the other compiles to machine code. Neither 
    are similar.


c.
1:	00  		16916		30.031246%
2:	48  		2778		4.931828%
3:	ff  		2472		4.388581%
4:	5f  		1728		3.067746%
5:	89  		1481		2.629243%
6:	45  		1407		2.497870%
7:	53  		1031		1.830351%
8:	74  		1022		1.814373%
9:	61  		841		1.493041%
10:	e8  		745		1.322610%
11:	49  		709		1.258699%
12:	8b  		709		1.258699%
13:	72  		677		1.201889%
14:	40  		577		1.024357%
15:	65  		543		0.963997%
16:	69  		535		0.949794%
17:	c7  		528		0.937367%
18:	31  		480		0.852152%
19:	63  		465		0.825522%
20:	73  		451		0.800668%


Prog2 n=2 slide=1
1:	0000    		12804		22.731550%
2:	4889    		1386		2.460632%
3:	ffff    		1313		2.331031%
4:	488b    		679		1.205461%
5:	ff48    		550		0.976441%
6:	89c7    		472		0.837964%
7:	c7e8    		472		0.837964%
8:	5374    		406		0.720791%
9:	4000    		397		0.704813%
10:	8b45    		377		0.669306%
11:	488d    		340		0.603618%
12:	0048    		326		0.578763%
13:	4953    		322		0.571662%
14:	005f    		318		0.564561%
15:	7249    		288		0.511300%
16:	5f5a    		271		0.481119%
17:	4545    		245		0.434960%
18:	0d00    		241		0.427859%
19:	0800    		224		0.397678%
20:	000d    		210		0.372823%


Prog2 n=2 slide=2
1:	0000    		6717		23.849595%
2:	ffff    		837		2.971879%
3:	4889    		734		2.606164%
4:	488b    		399		1.416702%
5:	4000    		362		1.285329%
6:	ff48    		262		0.930266%
7:	c7e8    		253		0.898310%
8:	89c7    		219		0.777588%
9:	0d00    		215		0.763386%
10:	5374    		201		0.713677%
11:	2200    		191		0.678171%
12:	0800    		181		0.642664%
13:	005f    		175		0.621361%
14:	0e10    		167		0.592956%
15:	0041    		166		0.589405%
16:	430d    		165		0.585854%
17:	488d    		165		0.585854%
18:	8602    		165		0.585854%
19:	1c00    		162		0.575202%
20:	4953    		162		0.575202%


Prog2 n=3 slide=1
1:	000000      		9967		17.695203%
2:	ffff48      		540		0.958705%
3:	89c7e8      		472		0.837979%
4:	4889c7      		468		0.830877%
5:	488b45      		368		0.653340%
6:	400000      		329		0.584100%
7:	005f5a      		269		0.477577%
8:	000048      		241		0.427866%
9:	ff4889      		240		0.426091%
10:	080000      		222		0.394134%
11:	000d00      		210		0.372830%
12:	5f5a4e      		204		0.362177%
13:	ffffff      		195		0.346199%
14:	488d85      		193		0.342648%
15:	000022      		188		0.333771%
16:	002200      		187		0.331996%
17:	22000d      		183		0.324894%
18:	537434      		176		0.312467%
19:	746f72      		173		0.307141%
20:	347061      		171		0.303590%


Prog2 n=3 slide=2
1:	000000      		4299		15.264709%
2:	400000      		328		1.164649%
3:	ffff48      		283		1.004865%
4:	4889c7      		251		0.891240%
5:	488b45      		224		0.795370%
6:	89c7e8      		219		0.777616%
7:	000022      		188		0.667542%
8:	22000d      		183		0.649789%
9:	080000      		179		0.635586%
10:	00410e      		165		0.585875%
11:	0e1086      		165		0.585875%
12:	430d06      		165		0.585875%
13:	860243      		165		0.585875%
14:	1c0000      		161		0.571672%
15:	00001c      		156		0.553918%
16:	005f5a      		143		0.507758%
17:	0c0708      		142		0.504208%
18:	554889      		132		0.468700%
19:	000048      		122		0.433192%
20:	48897d      		122		0.433192%


Prog3 n=1 slide=1
a.  prog3 was written in C++. This is easily noticeable due the C++ specific 
    library calls. It also load the library libstdc++.so.6

b.  Prog1 and Prog3 use the same libraries such as libstdc++.so, 
    ld-linux-x86-64.so and libm.so. They share a total of 63 shared strings.
    Half of these are library calls, and the other half is standard executables
    sections.

    Prog2 and Prog3 were both writing in C++, and use many of the same library
    calls from. libstdc++.so, libm.so, libgcc_s, libc.so. Therefore they share
    many of the same function calls. They have have 239 strings in common most
    of these are library calls, which hints at very similar functionality.

    Prog3 and Prog4 are the same program, Prog4 is just a UPX packed Prog3

    Prog3 and Prog5 were written in different languages, one compiles to 
    bytecode and the other compiles to machine code. Neither are similar.

    Prog3 and Prog6 were written in different languages, one compiles to 
    an interpreted language and the other compiles to machine code. Neither 
    are similar.


c.
1:	00  		19211		32.057872%
2:	48  		2902		4.842639%
3:	ff  		2304		3.844742%
4:	5f  		1857		3.098822%
5:	89  		1612		2.689984%
6:	45  		1439		2.401295%
7:	74  		1012		1.688750%
8:	8b  		841		1.403398%
9:	e8  		826		1.378367%
10:	53  		797		1.329974%
11:	65  		743		1.239862%
12:	61  		684		1.141408%
13:	49  		667		1.113039%
14:	40  		634		1.057971%
15:	c7  		615		1.026266%
16:	69  		602		1.004572%
17:	72  		589		0.982879%
18:	6f  		523		0.872743%
19:	63  		489		0.816006%
20:	6e  		455		0.759270%


Prog3 n=2 slide=1
1:	0000    		14818		24.727575%
2:	4889    		1489		2.484773%
3:	ffff    		1231		2.054234%
4:	488b    		751		1.253233%
5:	89c7    		547		0.912808%
6:	c7e8    		546		0.911139%
7:	8b45    		477		0.795995%
8:	4000    		475		0.792657%
9:	0048    		399		0.665832%
10:	ff48    		338		0.564038%
11:	005f    		313		0.522320%
12:	6f72    		265		0.442219%
13:	5f5a    		262		0.437213%
14:	4545    		244		0.407176%
15:	0d00    		243		0.405507%
16:	0800    		237		0.395494%
17:	5374    		234		0.390488%
18:	f848    		227		0.378807%
19:	488d    		220		0.367126%
20:	000d    		218		0.363788%


Prog3 n=2 slide=2
1:	0000    		7730		25.798485%
2:	ffff    		801		2.673297%
3:	4889    		735		2.453025%
4:	488b    		440		1.468478%
5:	4000    		402		1.341655%
6:	c7e8    		276		0.921136%
7:	89c7    		271		0.904449%
8:	0d00    		217		0.724227%
9:	0048    		214		0.714214%
10:	8b45    		207		0.690852%
11:	2200    		196		0.654140%
12:	0800    		185		0.617428%
13:	0041    		176		0.587391%
14:	0e10    		176		0.587391%
15:	430d    		174		0.580716%
16:	8602    		174		0.580716%
17:	ff48    		167		0.557354%
18:	1c00    		166		0.554017%
19:	005f    		162		0.540667%
20:	5548    		151		0.503955%


Prog3 n=3 slide=1
1:	000000      		11807		19.703291%
2:	4889c7      		546		0.911154%
3:	89c7e8      		546		0.911154%
4:	488b45      		456		0.760964%
5:	400000      		344		0.574060%
6:	ffff48      		338		0.564048%
7:	005f5a      		262		0.437220%
8:	000048      		251		0.418864%
9:	080000      		235		0.392163%
10:	000d00      		217		0.362125%
11:	746f72      		210		0.350444%
12:	000022      		197		0.328750%
13:	004889      		194		0.323743%
14:	ffffff      		193		0.322075%
15:	002200      		192		0.320406%
16:	1c0000      		187		0.312062%
17:	22000d      		187		0.312062%
18:	5f5a4e      		187		0.312062%
19:	4889e5      		178		0.297043%
20:	0c0708      		177		0.295374%


Prog3 n=3 slide=2
1:	000000      		5207		17.378679%
2:	400000      		343		1.144783%
3:	4889c7      		276		0.921167%
4:	89c7e8      		270		0.901141%
5:	488b45      		265		0.884454%
6:	000022      		197		0.657499%
7:	22000d      		187		0.624124%
8:	080000      		183		0.610774%
9:	00410e      		174		0.580736%
10:	0e1086      		174		0.580736%
11:	430d06      		174		0.580736%
12:	860243      		174		0.580736%
13:	ffff48      		171		0.570723%
14:	1c0000      		165		0.550698%
15:	00001c      		161		0.537347%
16:	554889      		150		0.500634%
17:	0c0708      		145		0.483946%
18:	005f5a      		134		0.447233%
19:	48897d      		127		0.423870%
20:	89e548      		119		0.397170%


Prog4 n=1 slide=1
a.  prog4 was written in C++. This is easily noticeable due the C++ specific
    library calls. It also load the library libstdc++.so.6

b.  Prog1 and Prog4 use the same libraries such as libstdc++.so, 
    ld-linux-x86-64.so and libm.so. They share a total of 63 shared strings.
    Half of these are library calls, and the other half is standard executables
    sections.

    Prog2 and Prog4 were both writing in C++, and use many of the same library
    calls from. libstdc++.so, libm.so, libgcc_s, libc.so. Therefore they share
    many of the same function calls. They have have 239 strings in common most
    of these are library calls, which hints at very similar functionality.

    Prog3 and Prog4 are the same program, Prog4 is just a UPX packed Prog3

    Prog4 and Prog5 were written in different languages, one compiles to 
    bytecode and the other compiles to machine code. Neither are similar.

    Prog4 and Prog6 were written in different languages, one compiles to 
    an interpreted language and the other compiles to machine code. Neither 
    are similar.

c.
1:	00  		515		2.578094%
2:	17  		293		1.466760%
3:	07  		230		1.151382%
4:	ff  		194		0.971165%
5:	5f  		186		0.931117%
6:	01  		181		0.906087%
7:	10  		175		0.876051%
8:	20  		174		0.871045%
9:	08  		169		0.846015%
10:	1f  		163		0.815979%
11:	48  		162		0.810973%
12:	03  		159		0.795955%
13:	b0  		154		0.770925%
14:	02  		150		0.750901%
15:	0c  		144		0.720865%
16:	0f  		144		0.720865%
17:	2f  		139		0.695835%
18:	06  		138		0.690829%
19:	04  		137		0.685823%
20:	40  		137		0.685823%


Prog4 n=2 slide=1
1:	0000    		214		1.071339%
2:	3c97    		25		0.125156%
3:	ffff    		21		0.105131%
4:	4dd3    		18		0.090113%
5:	0200    		17		0.085106%
6:	344d    		16		0.080100%
7:	4000    		15		0.075094%
8:	699a    		14		0.070088%
9:	d334    		14		0.070088%
10:	0002    		13		0.065081%
11:	973c    		13		0.065081%
12:	ff0f    		13		0.065081%
13:	ff17    		13		0.065081%
14:	2083    		12		0.060075%
15:	830c    		12		0.060075%
16:	a669    		12		0.060075%
17:	1414    		11		0.055069%
18:	0040    		10		0.050063%
19:	4889    		10		0.050063%
20:	6017    		9		0.045056%


Prog4 n=2 slide=2
1:	0000    		117		1.171406%
2:	3c97    		24		0.240288%
3:	0200    		12		0.120144%
4:	4000    		10		0.100120%
5:	4dd3    		9		0.090108%
6:	ffff    		9		0.090108%
7:	2083    		8		0.080096%
8:	699a    		8		0.080096%
9:	0100    		7		0.070084%
10:	070f    		7		0.070084%
11:	4889    		7		0.070084%
12:	6572    		7		0.070084%
13:	d334    		7		0.070084%
14:	ff17    		7		0.070084%
15:	011b    		6		0.060072%
16:	344d    		6		0.060072%
17:	6017    		6		0.060072%
18:	830c    		6		0.060072%
19:	00ff    		5		0.050060%
20:	0734    		5		0.050060%


Prog4 n=3 slide=1
1:	000000      		136		0.680885%
2:	3c973c      		13		0.065085%
3:	973c97      		12		0.060078%
4:	000200      		8		0.040052%
5:	d3344d      		8		0.040052%
6:	000002      		7		0.035046%
7:	004000      		7		0.035046%
8:	344dd3      		7		0.035046%
9:	4dd334      		7		0.035046%
10:	555058      		7		0.035046%
11:	a6699a      		7		0.035046%
12:	ffffff      		7		0.035046%
13:	000040      		6		0.030039%
14:	020000      		6		0.030039%
15:	400000      		6		0.030039%
16:	010000      		5		0.025033%
17:	141414      		5		0.025033%
18:	20830c      		5		0.025033%
19:	830c32      		5		0.025033%
20:	000001      		4		0.020026%


Prog4 n=3 slide=2
1:	000000      		59		0.590768%
2:	3c973c      		12		0.120156%
3:	000002      		6		0.060078%
4:	400000      		6		0.060078%
5:	000040      		5		0.050065%
6:	010000      		5		0.050065%
7:	000028      		4		0.040052%
8:	020000      		4		0.040052%
9:	555058      		4		0.040052%
10:	580f05      		4		0.040052%
11:	900119      		4		0.040052%
12:	d3344d      		4		0.040052%
13:	000001      		3		0.030039%
14:	000016      		3		0.030039%
15:	000020      		3		0.030039%
16:	0cc880      		3		0.030039%
17:	11db8a      		3		0.030039%
18:	16ea00      		3		0.030039%
19:	4883ee      		3		0.030039%
20:	699aa6      		3		0.030039%


Prog5 n=1 slide=1
a.  prog5 was written in Java. This is noticeable by the Java specific byte
    codes.

b.  Prog1 and Prog5 were written in different languages, one compiles to 
    bytecode and the other compiles to machine code. Neither are similar.

    Prog2 and Prog5 were written in different languages, one compiles to 
    bytecode and the other compiles to machine code. Neither are similar.

    Prog3 and Prog5 were written in different languages, one compiles to 
    bytecode and the other compiles to machine code. Neither are similar.

    Prog4 and Prog5 were written in different languages, one compiles to 
    bytecode and the other compiles to machine code. Neither are similar.

    Prog5 and Prog6 were written in different languages, one compiles to 
    an interpreted language and the other compiles to byte code. Neither 
    are similar.

c.
1:	00  		202		19.862340%
2:	61  		71		6.981318%
3:	01  		48		4.719764%
4:	2f  		41		4.031465%
5:	6e  		34		3.343166%
6:	74  		34		3.343166%
7:	69  		29		2.851524%
8:	72  		29		2.851524%
9:	6c  		28		2.753196%
10:	67  		26		2.556539%
11:	65  		24		2.359882%
12:	6a  		24		2.359882%
13:	76  		22		2.163225%
14:	07  		19		1.868240%
15:	4c  		16		1.573255%
16:	0a  		14		1.376598%
17:	0c  		13		1.278269%
18:	53  		13		1.278269%
19:	6f  		13		1.278269%
20:	28  		12		1.179941%


Prog5 n=2 slide=1
1:	0100    		45		4.429134%
2:	0000    		35		3.444882%
3:	6e67    		22		2.165354%
4:	7661    		22		2.165354%
5:	6176    		21		2.066929%
6:	6a61    		21		2.066929%
7:	612f    		20		1.968504%
8:	0700    		15		1.476378%
9:	616e    		15		1.476378%
10:	2f6c    		14		1.377953%
11:	672f    		14		1.377953%
12:	696e    		14		1.377953%
13:	6c61    		14		1.377953%
14:	0c00    		12		1.181102%
15:	4c6a    		11		1.082677%
16:	5374    		11		1.082677%
17:	7269    		11		1.082677%
18:	0a00    		10		0.984252%
19:	7472    		10		0.984252%
20:	0001    		9		0.885827%


Prog5 n=2 slide=2
1:	0100    		27		5.314961%
2:	0000    		17		3.346457%
3:	6176    		16		3.149606%
4:	612f    		15		2.952756%
5:	6e67    		13		2.559055%
6:	0700    		12		2.362205%
7:	6c61    		11		2.165354%
8:	4c6a    		8		1.574803%
9:	696e    		8		1.574803%
10:	2f53    		6		1.181102%
11:	7472    		6		1.181102%
12:	0001    		5		0.984252%
13:	0015    		5		0.984252%
14:	0a00    		5		0.984252%
15:	0b00    		5		0.984252%
16:	6a61    		5		0.984252%
17:	6e74    		5		0.984252%
18:	7269    		5		0.984252%
19:	7661    		5		0.984252%
20:	0003    		4		0.787402%


Prog5 n=3 slide=1
1:	617661      		21		2.068966%
2:	6a6176      		21		2.068966%
3:	000000      		20		1.970443%
4:	76612f      		20		1.970443%
5:	2f6c61      		14		1.379310%
6:	612f6c      		14		1.379310%
7:	616e67      		14		1.379310%
8:	6c616e      		14		1.379310%
9:	6e672f      		14		1.379310%
10:	4c6a61      		11		1.083744%
11:	72696e      		11		1.083744%
12:	537472      		10		0.985222%
13:	000100      		8		0.788177%
14:	672f53      		8		0.788177%
15:	696e67      		8		0.788177%
16:	747269      		8		0.788177%
17:	2f5374      		7		0.689655%
18:	000b00      		5		0.492611%
19:	284c6a      		5		0.492611%
20:	3b0100      		5		0.492611%


Prog5 n=3 slide=2
1:	617661      		16		3.149606%
2:	612f6c      		11		2.165354%
3:	6c616e      		11		2.165354%
4:	6e672f      		11		2.165354%
5:	4c6a61      		8		1.574803%
6:	000000      		7		1.377953%
7:	696e67      		6		1.181102%
8:	747269      		6		1.181102%
9:	2f5374      		5		0.984252%
10:	6a6176      		5		0.984252%
11:	72696e      		5		0.984252%
12:	76612f      		5		0.984252%
13:	000100      		4		0.787402%
14:	537472      		4		0.787402%
15:	010013      		3		0.590551%
16:	0a000b      		3		0.590551%
17:	2f6c61      		3		0.590551%
18:	616e67      		3		0.590551%
19:	656374      		3		0.590551%
20:	673b29      		3		0.590551%


Prog6 n=1 slide=1
a.  prog6 was written in Python. This is easily seen due to the Python specific
    commands.

b.  Prog1 and Prog6 were written in different languages, one compiles to 
    an interpreted language and the other compiles to machine code. Neither 
    are similar.

    Prog2 and Prog6 were written in different languages, one compiles to 
    an interpreted language and the other compiles to machine code. Neither 
    are similar.

    Prog3 and Prog6 were written in different languages, one compiles to 
    an interpreted language and the other compiles to machine code. Neither 
    are similar.

    Prog4 and Prog6 were written in different languages, one compiles to 
    an interpreted language and the other compiles to machine code. Neither 
    are similar.

    Prog5 and Prog6 were written in different languages, one compiles to 
    an interpreted language and the other compiles to byte code. Neither 
    are similar.

c.
1:	00  		1004		33.190084%
2:	74  		147		4.859504%
3:	64  		121		4.000000%
4:	73  		102		3.371901%
5:	65  		98		3.239669%
6:	01  		89		2.942149%
7:	69  		81		2.677686%
8:	02  		63		2.082645%
9:	70  		58		1.917355%
10:	61  		57		1.884297%
11:	2f  		56		1.851240%
12:	03  		54		1.785124%
13:	72  		52		1.719008%
14:	79  		45		1.487603%
15:	28  		44		1.454545%
16:	6e  		43		1.421488%
17:	6c  		42		1.388430%
18:	52  		41		1.355372%
19:	63  		40		1.322314%
20:	04  		34		1.123967%


Prog6 n=2 slide=1
1:	0000    		535		17.691799%
2:	0064    		86		2.843915%
3:	0200    		52		1.719577%
4:	0300    		52		1.719577%
5:	0074    		49		1.620370%
6:	0100    		44		1.455026%
7:	0073    		41		1.355820%
8:	0400    		31		1.025132%
9:	0052    		27		0.892857%
10:	7079    		27		0.892857%
11:	0083    		25		0.826720%
12:	0500    		23		0.760582%
13:	007c    		21		0.694444%
14:	0600    		20		0.661376%
15:	0800    		20		0.661376%
16:	2800    		20		0.661376%
17:	0700    		19		0.628307%
18:	0028    		18		0.595238%
19:	0065    		18		0.595238%
20:	6e74    		17		0.562169%


Prog6 n=2 slide=2
1:	0000    		271		17.923281%
2:	0064    		44		2.910053%
3:	0200    		28		1.851852%
4:	0300    		24		1.587302%
5:	0074    		22		1.455026%
6:	0100    		22		1.455026%
7:	0083    		18		1.190476%
8:	0400    		17		1.124339%
9:	0052    		16		1.058201%
10:	0073    		15		0.992064%
11:	0500    		13		0.859788%
12:	007c    		12		0.793651%
13:	7079    		12		0.793651%
14:	0800    		11		0.727513%
15:	2800    		11		0.727513%
16:	0028    		10		0.661376%
17:	0900    		10		0.661376%
18:	0600    		9		0.595238%
19:	0700    		9		0.595238%
20:	7273    		9		0.595238%


Prog6 n=3 slide=1
1:	000000      		272		8.997685%
2:	000073      		41		1.356269%
3:	000074      		39		1.290109%
4:	030000      		28		0.926232%
5:	000052      		25		0.826993%
6:	280000      		19		0.628515%
7:	000028      		18		0.595435%
8:	040000      		17		0.562355%
9:	002800      		16		0.529276%
10:	060000      		14		0.463116%
11:	740300      		14		0.463116%
12:	640200      		13		0.430036%
13:	657273      		13		0.430036%
14:	740400      		13		0.430036%
15:	006402      		12		0.396957%
16:	010000      		12		0.396957%
17:	020000      		12		0.396957%
18:	080000      		12		0.396957%
19:	007c02      		11		0.363877%
20:	010064      		11		0.363877%


Prog6 n=3 slide=2
1:	000000      		131		8.664021%
2:	000073      		26		1.719577%
3:	000074      		21		1.388889%
4:	030000      		14		0.925926%
5:	000052      		11		0.727513%
6:	040000      		10		0.661376%
7:	280000      		10		0.661376%
8:	008302      		9		0.595238%
9:	000028      		8		0.529101%
10:	002800      		8		0.529101%
11:	050000      		8		0.529101%
12:	740300      		8		0.529101%
13:	000001      		7		0.462963%
14:	010000      		7		0.462963%
15:	060000      		7		0.462963%
16:	617079      		7		0.462963%
17:	640200      		7		0.462963%
18:	6c6179      		7		0.462963%
19:	736361      		7		0.462963%
20:	007c02      		6		0.396825%
