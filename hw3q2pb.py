#!/usr/bin/python2.6
import socket
from scapy.all import *

fp=open("inpartb.txt", "r")
ipdst=fp.readline().rstrip('\n')
tcpdport=int(fp.readline().rstrip('\n'))
ipsrc=fp.readline().rstrip('\n')
tcpsport=int(fp.readline().rstrip('\n'))
fp.close

ip=IP(version=4, ihl=20, src=ipsrc, dst=ipdst)
tcp=TCP(flags='S', dport=tcpdport, sport=tcpsport)
try:
    hname=socket.gethostbyaddr(ipdst)[0]
except socket.herror:
    hname=ipdst

load=fp.read().rstrip('\n')+"\r\nHost: "+hname+"\r\n" \
     "User-Agent: Mozilla/5.0 (X11; Linux x86_64; rv:38.0) Gecko/20100101 " \
     "Firefox/38.0\r\n" \
     "Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8"\
     "\r\nAccept-Language: en-US,en;q=0.5\r\n" \
     "Accept-Encoding: gzip, deflate\r\nConnection: keep-alive\r\n\r\n"
pkt=ip/tcp/load
del pkt[IP].chksum
del pkt[TCP].chksum
pkt=pkt.__class__(str(pkt))
pkt.show()
send(pkt)
