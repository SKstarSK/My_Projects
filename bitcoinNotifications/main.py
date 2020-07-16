import requests
import matplotlib.pyplot as plt
import datetime
import time

xArray = []
yArray = []
bitcoinApiUrl = 'https://blockchain.info/ru/ticker'
fig = plt.figure()
ax = fig.add_subplot(111)
# plt.ion()

fig.show()
fig.canvas.draw()

while True:

    response = requests.get(bitcoinApiUrl)
    responseJson = response.json()

    xArray.append(datetime.datetime.today().strftime("%H.%M.%S"))
    yArray.append(responseJson['RUB']['buy'])

    ax.clear()
    ax.plot(xArray, yArray)
    time.sleep(5)
    fig.canvas.draw()
    print(xArray)
    print(yArray)