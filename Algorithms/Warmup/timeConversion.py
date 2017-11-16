#!/bin/python3

import sys

def timeConversion(s):
    # Complete this function
    time24 = ""
    if int(s[0:2]) < 12 and s[8:10] == "PM":
        time24 = str(int(s[0:2])+12)+s[2:8]
        #print(time24)
    elif int(s[0:2]) == 12 and s[8:10] == "AM":
        time24 = time24 = "00"+s[2:8]
    else:
        time24 = s[0:8]
        
    return(time24)

s = input().strip()
result = timeConversion(s)
print(result)
