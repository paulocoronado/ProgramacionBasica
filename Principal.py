import math

def iniciar():
    aList = inputData()
    print(getArea(3))
    print(getDistance(aList))

def inputData():
    aList = []

    for i in range(0, 4):
        number = int(input('Please enter a number: '))
        aList.append(number)
    return aList


def getArea(myPoints):
    base = myPoints[2] - myPoints[0]
    h = myPoints[1]
    rectangleArea = base * h

    triangleH = myPoints[3] - myPoints[1]
    triangleArea = base * triangleH / 2

    return triangleArea + rectangleArea


def getDistance(myPoints):
    a = myPoints[2] - myPoints[0]
    b = myPoints[3] - myPoints[1]

    distance = math.sqrt(math.pow(a, 2) + math.pow(b, 2))
    return distance

iniciar()