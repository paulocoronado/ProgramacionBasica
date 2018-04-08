#include "constantes.h"

void imprimirTablero(char matriz[FILAS][COLUMNAS]){

int i,j;
    for(i=0; i<FILAS; i++){

        printf("|");

        for(j=0; j<COLUMNAS; j++){

                printf(" %c |", matriz[i][j]);
        }
        printf("\n");
    }

}
