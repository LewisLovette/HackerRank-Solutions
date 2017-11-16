#!/bin/python3

import sys

def aVeryBigSum(n, ar):
    # Complete this function
    x = 0
    sumOfAr = 0
    while x < n:
        sumOfAr += ar[x]
        x += 1
    
    return(sumOfAr)
    
n = int(input().strip())
ar = list(map(int, input().strip().split(' ')))
result = aVeryBigSum(n, ar)
print(result)
