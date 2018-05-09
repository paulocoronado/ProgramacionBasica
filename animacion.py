from graphics import *
import time


def main():
    win = GraphWin('Ir y Volver', 300, 300)

    cir1 = Circle(Point(40, 100), 25)
    cir1.setFill("yellow")
    cir1.draw(win)

    while 1==1:
        for i in range(46):
            cir1.move(5, 0)
            time.sleep(.05)

        for i in range(46):
            cir1.move(-5, 0)
            time.sleep(.05)
    win.close()




main()