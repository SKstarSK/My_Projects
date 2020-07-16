import requests
import matplotlib.pyplot as plt
import matplotlib.animation as animation
import datetime
import time

xArray = []
yArray = []
bitcoinApiUrl = 'https://blockchain.info/ru/ticker'
fig, ax = plt.subplots()
[line] = ax.step(5,0)
fig.show()
fig.canvas.draw()
t = 0

while True:
    response = requests.get(bitcoinApiUrl)
    responseJson = response.json()

    # xArray.append(datetime.datetime.today().strftime("%H.%M.%S"))
    xArray.append(t)
    yArray.append(responseJson['RUB']['buy'])
    line.set_xdata(xArray)
    line.set_ydata(yArray)

    ax.relim()
    ax.autoscale_view(True, True, True)
    ax.clear()
    ax.plot(xArray, yArray)
    time.sleep(5)
    t += 5
    fig.canvas.draw()