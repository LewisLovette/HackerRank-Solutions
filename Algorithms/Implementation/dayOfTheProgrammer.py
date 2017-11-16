#!/bin/python3

import sys

def solve(year):
    # Complete this function
    if year >= 1700 and year <= 1917:
        if year%4 == 0:
            date = "12.09."+str(year)
        else:
            date = "13.09."+str(year)
    elif year == 1918:
        date = "26.09."+str(year)   #13 days later than usual
    elif year <= 2700:
        if year%400 == 0 or (year%4 == 0 and year%100 != 0):
            date = "12.09."+str(year)
        else:
            date = "13.09."+str(year)
    
    return(date)
year = int(input().strip())
result = solve(year)
print(result)
