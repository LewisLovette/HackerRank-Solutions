#!/bin/python3

import sys

def solve(n, p):
    # Complete this function
    #from 0 to p
    oldP = p
    if n - p < p:
        p = n - p
    
    if n%2 == 0 and p == 1 and n - oldP < oldP: #specific case where n-p = 1, n is even and p is odd
        minPages = 1
    elif p == 1 and p:
        minPages = 0
    elif n%2 == 1 and p == n-1:
        minPages = 0
    elif p%2 == 0:
        minPages = p/2
    else:
        minPages = p/2 - 1
    
    if minPages < 0:
        minsPages = 0
    
    if minPages%1 == 0.5:
        minPages += 0.5
    
    minPages = int(minPages)
    return minPages
    
    
n = int(input().strip())
p = int(input().strip())
result = solve(n, p)
print(result)
