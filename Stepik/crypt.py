s = list()
for i in range(4):
    s.append(input())
print(s)
encryption = dict()
decryption = dict()
#textEncrypt = ''
#textDecrypt = ''
for i in range(0,len(s[0])):
    encryption[s[0][i]] = s[1][i]
    decryption[s[1][i]] = s[0][i]
print(encryption)
for i in range(0, len(s[2])):
    print(encryption[s[2][i]],end='')
print()
for i in range(0, len(s[3])):
    print(decryption[s[3][i]],end='')