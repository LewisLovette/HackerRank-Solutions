#!/bin/python3

import sys

def bonAppetit(n, k, b, ar):
    # Complete this function
    annaBill = 0
    indexCount = 0
    for i in ar:
        if indexCount != k:
            annaBill += i
        indexCount += 1
    
    annaBill /= 2
    
    if annaBill == b:
        return "Bon Appetit"
    else:
        return int(b-annaBill)
    
    
n, k = input().strip().split(' ')
n, k = [int(n), int(k)]
ar = list(map(int, input().strip().split(' ')))
b = int(input().strip())
result = bonAppetit(n, k, b, ar)
print(result)
