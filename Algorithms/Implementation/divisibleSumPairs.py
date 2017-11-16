#!/bin/python3

import sys

def divisibleSumPairs(n, k, ar):
    # Complete this function
    count = 0
    iPosCheck = 0
    for i in ar:
        jPosCheck = 0
        for j in ar:
            if (i+j) % k == 0 and iPosCheck != jPosCheck:
                count += 1
            jPosCheck += 1
        iPosCheck +=1
    
    count /= 2  #as it will get the same sum twice but 1 in the reverse order
    count = int(count)  #remove float
    return(count)

n, k = input().strip().split(' ')
n, k = [int(n), int(k)]
ar = list(map(int, input().strip().split(' ')))
result = divisibleSumPairs(n, k, ar)
print(result)
