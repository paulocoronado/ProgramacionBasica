void imprimirTablero(int miTablero[8][8], int misJugadas[8][8]){

    int fila, columna;
        for(fila=0;fila<8;fila++){
        printf("\n");
    }
    for(fila=0;fila<8;fila++){
        printf("|");
        for(columna=0;columna<8;columna++){

            if(misJugadas[fila][columna]==1){
                printf("  %d  |", miTablero[fila][columna]);
            }else{

                printf("     |");

            }
        }
        printf("\n");
    }

        for(fila=0;fila<8;fila++){
        printf("\n");
    }


}
