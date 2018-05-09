from graphics import *
import time


def main():
    win = GraphWin('Círculos', 300, 300)
    entrada = Entry(Point(50, 10), 10)
    entrada.draw(win)
    win.getMouse()

    total=int (entrada.getText())

    for radio in range(0,total*5,5):
        cir1 = Circle(Point(win.getWidth() / 2, win.getHeight() / 2), radio)
        cir1.draw(win)

        time.sleep(1)

    win.getMouse()
    win.close()




main()