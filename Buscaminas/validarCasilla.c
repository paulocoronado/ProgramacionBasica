
int validarCasilla(int fila, int columna, int x, int y){

        int filaValida, columnaValida;

        if(x<0){

                filaValida=(fila+x>-1);

            }else{

                filaValida=(fila+x<8);
            }

            if(y<0){

                columnaValida=(columna+y>-1);

            }else{

                columnaValida=(columna+y<8);
            }

        return filaValida&&columnaValida;

}
