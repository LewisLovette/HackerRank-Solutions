#!/bin/python3

import sys


n = int(input().strip())
a = []
for a_i in range(n):
    a_t = [int(a_temp) for a_temp in input().strip().split(' ')]
    print(str(n)+"\n"+str(a_t))
    a.append(a_t)
    leftDiag = 0
    rightDiag = 0
    positionCheck = 0
    count = 0
    #For left diagonal
    for i in range(n):
        for j in range(n):
            if count == positionCheck:
                arrayLayer = a_t[i]
                leftDiag += arrayLayer
            positionCheck += 1
        positionCheck = 0
        count += 1
    #For right diagonal
    for i in range(n):
        for j in range(n):
            if count == positionCheck:
                arrayLayer = a_t[i]
                leftDiag += arrayLayer
            positionCheck += 1
        positionCheck = 0
        count += 1
    print(str(leftDiag)+"\n"+str(rightDiag)+"\n")
    
    print(leftDiag-rightDiag+"\tl-r: "+rightDiag-leftDiag)
