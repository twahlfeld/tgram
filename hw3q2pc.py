#!/usr/bin/python2.6
import sys
import string
from scapy.all import *

lbip = "127.0.0.1"
tcpdport = int(sys.argv[1])
tcpsport = int(sys.argv[2])

#Part 1
for port in range(3000, 3020):
    send(IP(dst=lbip)/TCP(dport=port, sport=tcpsport)/"")

#Part 2
for _ in range(5):
    s= ''.join(random.SystemRandom().choice(string.ascii_uppercase +  \
        string.digits) for _ in range(10))
    send(IP(dst=lbip)/TCP(dport=tcpdport, sport=tcpsport)/Raw(load=s))
