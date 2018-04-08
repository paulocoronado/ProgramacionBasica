#include "sumarBombas.h"
void colocarTotales(int matriz[8][8]){

    int fila, columna;
    for(fila=0;fila<8;fila++){
        for(columna=0;columna<8;columna++){

            if(matriz[fila][columna]!=9){

                matriz[fila][columna]= sumarBombas(matriz, fila, columna);

            }

        }
    }
}
