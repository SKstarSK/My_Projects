with open('text1.txt') as file:
    s = file.readlines()
    #s = s.lower()
text = ''
for i in range(0, len(s)):
    s[i] = s[i].strip()
    text += s[i] + ' '
text = text.lower()
text = text.split(' ')
#s = s.split(' ')
print(text)
myDict = dict()
keysDelete = list()
for i in text:
    myDict[i] = text.count(i)
print(myDict)
max = 0
for i in myDict.keys():
    if myDict[i] > max:
        max = myDict[i]
for i in myDict.keys():
    if myDict[i] < max:
        keysDelete.append(i)
#print(keysDelete)
for i in keysDelete:
    myDict.pop(i)
for i in myDict.keys():
    key = i
    value = myDict[i]
    break
for i in myDict.keys():
    if i < key:
        key = i
        value = myDict[i]
print(key, value)