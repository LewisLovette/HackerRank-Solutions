#!/bin/python3

import sys

def getTotalX(a, b):
    # Complete this function
    count = 0
    
    for i in range(1, max(b)+1):    #+1 so for cases when a is 1

        satisfiesA = 0
        satisfiesB = 0
        for j in a:
            if i%j == 0:
                satisfiesA += 1
        for j in b:
            if j%i == 0:
                satisfiesB += 1
        
        #if all array positions are satisfies for both arrays then it means are condition is met
        if satisfiesA == len(a) and satisfiesB == len(b):
            count+=1
        
    return(count)
       
    
        
        
if __name__ == "__main__":
    n, m = input().strip().split(' ')
    n, m = [int(n), int(m)]
    a = list(map(int, input().strip().split(' ')))
    b = list(map(int, input().strip().split(' ')))
    total = getTotalX(a, b)
    print(total)
