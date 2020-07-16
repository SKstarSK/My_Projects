from urllib.request import urlopen
html = urlopen("https://stepik.org/media/attachments/lesson/209719/2.html").read().decode('utf-8')
s = str(html)
ans = []
state = 0
start_point = s.find('<code>')
stop_point = s.find('</code>',start_point,len(s))

for i in range(start_point, stop_point):
    print(s[i], end='')
#print(start_point, stop_point)
#s = ''.join(ans)
#print(s)