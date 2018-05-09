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
        p3 = win.getMouse()
        mensaje.setText(p3)
        p3.draw(win)
        vertices = [p1, p2, p3]

        triangulo = Polygon(vertices)
        triangulo.setFill('gray')
        triangulo.setOutline('cyan')
        triangulo.setWidth(1)  # width of boundary line
        triangulo.draw(win)

        mensaje.setText('Ha dibujado un triángulo!!') # change text mensaje
        win.getMouse()
        mensaje.setText('Continúe dibujando!!')

    win.close()

main()