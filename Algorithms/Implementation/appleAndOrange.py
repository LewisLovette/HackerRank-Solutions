#!/bin/python3

import sys


s,t = input().strip().split(' ')
s,t = [int(s),int(t)]
a,b = input().strip().split(' ')
a,b = [int(a),int(b)]
m,n = input().strip().split(' ')
m,n = [int(m),int(n)]
apple = [int(apple_temp) for apple_temp in input().strip().split(' ')]
orange = [int(orange_temp) for orange_temp in input().strip().split(' ')]

applesInHouse = 0
orangesInHouse = 0
for distance in apple:
    if a + int(distance) >= s and a + int(distance) <= t:   #means it's in the range of the house
        applesInHouse += 1
for distance in orange:
    if b + int(distance) >= s and b + int(distance) <= t:   #means it's in the range of the house
        orangesInHouse += 1

print(str(applesInHouse)+"\n"+str(orangesInHouse))




