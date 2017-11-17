#!/bin/python3

import sys

def sockMerchant(n, ar):
    # Complete this function
    alreadyCounted = []
    pairs = 0
    for i in ar:
        if i not in alreadyCounted:
            num = ar.count(i)
            pairs += num//2
            alreadyCounted.append(i)
    
    return pairs
    
    
n = int(input().strip())
ar = list(map(int, input().strip().split(' ')))
result = sockMerchant(n, ar)
print(result)
