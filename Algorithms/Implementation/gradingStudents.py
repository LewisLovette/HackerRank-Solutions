#!/bin/python3

import sys

def solve(grades):
    # Complete this function
    count = 0
    for i in grades:
        numGrade = int(i)
        if numGrade > 37:
            if numGrade%5 > 2:
                numGrade += 5-(numGrade%5)
        grades[count] = numGrade
        count += 1
    
    return(grades)
    
    
n = int(input().strip())
grades = []
grades_i = 0
for grades_i in range(n):
   grades_t = int(input().strip())
   grades.append(grades_t)
result = solve(grades)
print ("\n".join(map(str, result)))


