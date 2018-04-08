#include "constantes.h"

void limpiarTablero(char matriz[FILAS][COLUMNAS]){

int i,j;
    for(i=0; i<FILAS; i++){


        for(j=0; j<COLUMNAS; j++){

            matriz[i][j]=' ';
        }
        printf("\n");
    }

}
