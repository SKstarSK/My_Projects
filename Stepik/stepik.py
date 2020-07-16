with open('text.txt') as file:
    s = file.readline()
#print(s)
myDict = dict()
num = ''
lastNum = False
word = ''
for i in s:
    if i == s[len(s)-1]:
        num += i
        myDict[word] = int(num)
        for i in myDict.keys():
            for j in range(0, myDict[i]):
                print(i, end='')
        myDict = dict()
        break
    if i.isdigit() and not lastNum:
        num = i
        lastNum = True
    elif i.isdigit() and lastNum:
        num += i
    elif i.isalpha() and lastNum:
        myDict[word] = int(num)
        lastNum = False
        num = ''
        word = i
        for i in myDict.keys():
            for j in range(0, myDict[i]):
                print(i, end='')
        myDict = dict()
    else:
        myDict[i] = 0
        word = i
for i in myDict.keys():
    for j in range(0,myDict[i]):
        print(i,end='')
