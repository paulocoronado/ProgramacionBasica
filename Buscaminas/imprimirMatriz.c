#include <stdio.h>
#include <stdlib.h>

void imprimirMatriz(int matriz[8][8]){

    int fila, columna;
    for(fila=0;fila<8;fila++){
        printf("|");
        for(columna=0;columna<8;columna++){
            printf("  %d  |", matriz[fila][columna]);
        }
        printf("\n");
    }
    for(fila=0;fila<8;fila++){
        printf("\n");
    }


}
