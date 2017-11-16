#!/bin/python3

import sys

def solve(n, s, d, m):
    # Complete this function
    count = 0
    piecesCount = 0
    for i in s:
        sumOfPieces = 0
        #If count+m(onth) is <= the length of s[] then it wont go out of range
        if count + m <= len(s):
            count2 = count
            #set count2 to count so we go from index[count2] to index[count2 + m] adding them as we go
            for j in range(m):
                sumOfPieces += s[count2]
                count2 += 1
        #if the sum is equal to d it means we can break the piece
        if sumOfPieces == d:
            piecesCount += 1
        count += 1
        
        
    return(piecesCount)
    
n = int(input().strip())
s = list(map(int, input().strip().split(' ')))
d, m = input().strip().split(' ')
d, m = [int(d), int(m)]
result = solve(n, s, d, m)
print(result)
