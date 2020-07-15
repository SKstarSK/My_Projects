def fibonacciNums(countEvenNums):
    firstNum = 0
    secondNum = 1
    nextNum = 0
    while countEvenNums > 0:
        if nextNum % 2 == 0:
            if countEvenNums == 1:
                print(nextNum,end="")
                break
            print(nextNum,end=",")
            countEvenNums -= 1
        firstNum = secondNum
        secondNum = nextNum
        nextNum = firstNum + secondNum

fibonacciNums(4)
