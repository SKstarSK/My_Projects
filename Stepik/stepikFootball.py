#import codecs
#with codecs.open('football.txt', encoding='utf-8') as file:
#    s = file.readlines()
    #s = s.lower()
#for i in range(1, len(s)):
#    s[i] = s[i].strip().split(';')
#n = int(s[0])
n = int(input())
s = list()
s.append(n)
for i in range(n):
    s.append(input().split(';'))
myDict = dict()
key = ''

for i in range(1,n+1):
    myDict[s[i][0]] = myDict.fromkeys(['all', 'win', 'tie', 'lose', 'all_score'],0)
    myDict[s[i][2]] = myDict.fromkeys(['all', 'win', 'tie', 'lose', 'all_score'],0)

for i in range(1,n+1):
    if int(s[i][1]) > int(s[i][3]):
        myDict[s[i][0]]['win'] += 1
        myDict[s[i][2]]['lose'] += 1
        myDict[s[i][0]]['all'] += 1
        myDict[s[i][2]]['all'] += 1
    elif int(s[i][1]) < int(s[i][3]):
        myDict[s[i][0]]['lose'] += 1
        myDict[s[i][2]]['win'] += 1
        myDict[s[i][0]]['all'] += 1
        myDict[s[i][2]]['all'] += 1
    elif int(s[i][1]) == int(s[i][3]):
        myDict[s[i][0]]['tie'] += 1
        myDict[s[i][2]]['tie'] += 1
        myDict[s[i][0]]['all'] += 1
        myDict[s[i][2]]['all'] += 1

for i in myDict.keys():
    myDict[i]['all_score'] = 3 * myDict[i]['win'] + myDict[i]['tie']
    print(i + ':',myDict[i]['all'],myDict[i]['win'],myDict[i]['tie'],myDict[i]['lose'],myDict[i]['all_score'])