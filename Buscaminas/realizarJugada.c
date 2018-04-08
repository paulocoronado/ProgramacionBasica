void realizarJugada(int tablero[8][8],int jugadas[8][8], int fila,int columna){

     int x ,y, casillaValida;

    jugadas[fila][columna]=1;

    for(x=-1;x<2;x++){
        for(y=-1;y<2;y++){


            casillaValida=validarCasilla(fila, columna, x, y);

            if(casillaValida && tablero[fila+x][columna+y]!=9 && jugadas[fila+x][columna+y]==0 ){

                    if(tablero[fila+x][columna+y]==0){

                        realizarJugada(tablero, jugadas, fila+x, columna+y );

                    }else{

                        jugadas[fila+x][columna+y]=1;
                    }

            }
        }
    }

}
