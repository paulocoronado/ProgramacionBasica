void colocarBombas(int matriz[8][8]){

    int i, fila, columna;
    for(i=0;i<10;i++){

        do{
        fila=rand()%8;
        columna=rand()%8;
        }while(matriz[fila][columna]==9);

        matriz[fila][columna]=9;
    }

}
