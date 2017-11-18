
def oddNEven(strToPrint):
    strToPrint = list(strToPrint)
    
    even = ""
    odd = ""
    for i in range(len(strToPrint)):
        if i%2 == 0:
            even += strToPrint[i]
        else:
            odd += strToPrint[i]
    
    return even+" "+odd

numOfInput = input()
for i in range(int(numOfInput)):
    strToPrint = input()
    print(oddNEven(strToPrint))
