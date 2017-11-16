#!/bin/python3

import sys

def migratoryBirds(n, ar):
    # Complete this function
    lowerTypes = [] #so that code is much more efficient.
    largestType = 0
    mostId = ar[0]
    for i in ar:
        if i not in lowerTypes:
            count = ar.count(i)
            if count == largestType:
                if i < mostId:
                    mostId = i
            elif count > largestType:
                mostId = i
                largestType = count
                
            lowerTypes.append(i)    #so next time we come accross this ID it skips it as we've checked it already
            
    return mostId
            
            
n = int(input().strip())
ar = list(map(int, input().strip().split(' ')))
result = migratoryBirds(n, ar)
print(result)
