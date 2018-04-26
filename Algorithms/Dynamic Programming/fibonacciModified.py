#!/bin/python3

import sys

def fibonacciModified(t1, t2, n):
    # Complete this function
    count = 2
    temp = 0
    fibNums = []
    
    fibNums.append(t1)
    fibNums.append(t2)

    if n == t1:
        return t1
    elif n == t2:
        return t2
    else:
        while count < n: #Start at position 2 as 2 are already placed in the array.
            temp = pow(fibNums[count-1], 2)+fibNums[count-2]
            fibNums.append(temp)
            count += 1
            
    #-1 as count goes to n, so adjust for array.
    return fibNums[count-1]

if __name__ == "__main__":
    t1, t2, n = input().strip().split(' ')
    t1, t2, n = [int(t1), int(t2), int(n)]
    result = fibonacciModified(t1, t2, n)
    print(result)
