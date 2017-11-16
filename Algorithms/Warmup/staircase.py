#!/bin/python3

import sys


n = int(input().strip())
spaces = " "
hashes = "#"  
x = 1   #default at 1 hash
while x <= n:
    print(str(spaces*(n-x))+(hashes*x))
    x += 1