import codecs
with codecs.open('text2.txt', encoding='utf-8') as file:
    s = file.readlines()
    #s = s.lower()
for i in range(0, len(s)):
    s[i] = s[i].strip().split(';')
myDict = dict()
key = ''
for i in s:
    for j in range(0,len(i)):
        if j == 0:
            myDict[i[j]] = 0
            key = i[j]
        else:
            myDict[key] += int(i[j])
    myDict[key] = myDict[key] / 3
    key = ''
#print(myDict)
listOfMarks = list()
mark = 0
for j in range(1,4):
    for i in s:
        mark += int(i[j])
    mark = mark / len(s)
    listOfMarks.append(mark)
    mark = 0
#print(listOfMarks)
for i in myDict.values():
    print(i)
for i in listOfMarks:
    print(i,end=' ')