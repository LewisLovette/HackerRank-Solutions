numSteps = input()
steps = list(input())
pos = 0 #0 being sealevel, + is mountain and - is sealevel
valleys = 0

for i in steps:
    if pos == -1 and i == "U":
        valleys += 1
    
    if i == "D":    #down
        pos -= 1
    else:           #Up
        pos += 1
    
   
    
print(valleys)
