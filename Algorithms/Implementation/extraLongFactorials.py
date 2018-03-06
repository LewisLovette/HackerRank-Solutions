#!/bin/python3

import sys

def extraLongFactorials(n):
    # Complete this function
    if n == 1:
        return n
    else:
        return n *extraLongFactorials(n-1)

if __name__ == "__main__":
    n = int(input().strip())
    print(extraLongFactorials(n))
