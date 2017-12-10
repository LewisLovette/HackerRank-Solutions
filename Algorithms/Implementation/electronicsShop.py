#!/bin/python3

import sys

def getMoneySpent(keyboards, drives, s):
    # Complete this function
    
    mostMoney = -1
    keyCount = 0   #less than save
    driveCount = 0
    keySave = []
    driveSave = []
    
    #Comparing each element to eachother
    for i in keyboards:
        for j in drives:
            if i+j <= s and i+j > mostMoney:
                mostMoney = i+j
                keySave.append(keyCount)
                driveSave.append(driveCount)
            driveCount += 1
        driveCount = 0
        keyCount += 1
    
    #Comparing against elements of again but this time can use multipe from same array
    #aslong as the same array position isn't used
    count = 0
    if mostMoney < s and mostMoney > 0:
        for i in keyboards:
            if mostMoney + i <= s and count not in keySave:
                mostMoney += i
                keySave.append(count)
            count += 1
    
    return mostMoney
    
s,n,m = input().strip().split(' ')
s,n,m = [int(s),int(n),int(m)]
keyboards = list(map(int, input().strip().split(' ')))
drives = list(map(int, input().strip().split(' ')))
#  The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
moneySpent = getMoneySpent(keyboards, drives, s)
print(moneySpent)