#!/bin/python3

import sys

def birthdayCakeCandles(n, ar):
    # Complete this function
    maxNum = max(ar)
    candlesBlow = ar.count(maxNum)
    
    return(candlesBlow)
    
    
n = int(input().strip())
ar = list(map(int, input().strip().split(' ')))
result = birthdayCakeCandles(n, ar)
print(result)
