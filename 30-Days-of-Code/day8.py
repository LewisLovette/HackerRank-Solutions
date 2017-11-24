inputLen = int(input())
miscDic = {}

for i in range(inputLen):
    miscInput = input().split()
    miscDic[miscInput[0]] = miscInput[1]

for i in range(inputLen):
    miscInput = input()
    if miscInput in miscDic:
        print(miscInput+"="+miscDic[miscInput])
    else:
        print("Not found")