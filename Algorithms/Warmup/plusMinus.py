#!/bin/python3

import sys


n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]
pos = 0
neg = 0
zero = 0
arrLen = len(arr)
for i in arr:
    if i == 0:
        zero += 1
    elif i > 0:
        pos += 1
    else:
        neg += 1

print(str(pos/arrLen)+"\n"+str(neg/arrLen)+"\n"+str(zero/arrLen))
        