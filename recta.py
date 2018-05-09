from graphics import *

def main():
    win = GraphWin('Triángulos', 350, 350)
    win.setBackground('white')

    mensaje = Text(Point(win.getWidth() / 2, 30), 'Dibuje tres puntos')
    mensaje.setSize(12)
    mensaje.draw(win)

    while 1==1:

        p1 = win.getMouse()
        mensaje.setText(p1)
        p1.draw(win)
        p2 = win.getMouse()
        mensaje.setText(p2)
        p2.draw(win)

        line = Line(p1, p2)
        line.draw(win)


        mensaje.setText('Has dibujado una recta!!') # change text mensaje
        win.getMouse()
        mensaje.setText('Continúe dibujando!!')

    win.close()

main()


