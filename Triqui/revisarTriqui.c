#include "constantes.h"

int revisarTriqui(char matriz[FILAS][COLUMNAS]){

    int i;
    for(i=0; i<FILAS; i++){

        if(matriz[i][0] !=' ' && matriz[i][0]==matriz[i][1] && matriz[i][0]==matriz[i][2]){
                return 1;
        }
    }

    for(i=0; i<COLUMNAS; i++){

        if(matriz[0][i] !=' ' && matriz[0][i]==matriz[1][i] && matriz[0][i]==matriz[2][i]){
                return 1;
        }
    }

    if(matriz[1][1] !=' ' && matriz[0][0]==matriz[1][1] && matriz[0][0]==matriz[2][2]){
                return 1;
    }

    if(matriz[1][1] !=' ' && matriz[0][2]==matriz[1][1] && matriz[0][0]==matriz[2][0]){
                return 1;
    }

    return 0;

}
