void llenarMatriz(int matriz[8][8], int valor){

    int fila, columna;
    for(fila=0;fila<8;fila++){
        for(columna=0;columna<8;columna++){
            matriz[fila][columna]=valor;
        }
    }
}
