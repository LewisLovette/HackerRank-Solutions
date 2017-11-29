#!/bin/python3

import sys


n = int(input().strip())
binaryN = list("{0:b}".format(n))
oneCount = 0
mostOnes = 0
for i in binaryN:
    if i == "1":
        oneCount += 1
        if oneCount > mostOnes:
            mostOnes = oneCount
    else:
        oneCount = 0

print(mostOnes)