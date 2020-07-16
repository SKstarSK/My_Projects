# put your python code here
myList = list()
word = ''
i = 0
j = i
while True:
    word = input()
    if word == 'end':
        break
    else:
        word = word.split(' ')
    myList.insert(i, word)
    i += 1
#print(myList)
for i in range(len(myList)):
    for j in range(len(myList)):
        myList[i][j] = int(myList[i][j])
for i in range(len(myList)):
    for j in range(len(myList)):
        if i == len(myList)-1 and j == len(myList)-1:
            print(myList[i-1][j] + myList[0][j] + myList[i][j-1] + myList[i][0], end=' ')
        elif i != len(myList)-1 and j == len(myList)-1:
            print(myList[i-1][j] + myList[i+1][j] + myList[i][j-1] + myList[i][0], end=' ')
        elif i == len(myList)-1 and j != len(myList)-1:
            print(myList[i-1][j] + myList[0][j] + myList[i][j-1] + myList[i][j+1], end=' ')
        elif i != len(myList)-1 and j != len(myList)-1:
            print(myList[i-1][j] + myList[i+1][j] + myList[i][j-1] + myList[i][j+1], end=' ')
    print()