#!/bin/python3

import sys

def getRecord(s):
    # Complete this function
    highBreakCount = 0
    lowBreakCount = 0
    highBreak = int(s[0])
    lowBreak = int(s[0])
    for i in s:
        if i > highBreak:
            highBreakCount += 1
            highBreak = (i)
        if i < lowBreak:
            lowBreakCount += 1
            lowBreak = int(i)
            
    return(highBreakCount, lowBreakCount)

n = int(input().strip())
s = list(map(int, input().strip().split(' ')))
result = getRecord(s)
print (" ".join(map(str, result)))
