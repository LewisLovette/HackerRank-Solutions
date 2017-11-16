#!/bin/python3

import sys

arr = list(map(int, input().strip().split(' ')))
arr.sort()
aL = len(arr) - 1
min = arr[0]+arr[1]+arr[2]+arr[3]
max = arr[aL]+arr[aL-1]+arr[aL-2]+arr[aL-3]

print(str(min)+" "+str(max))