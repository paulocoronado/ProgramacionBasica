#include <stdio.h>
#include "realizarJugada.h"
#include "imprimirTablero.h"
void juego(int miTablero[8][8], int misJugadas[8][8] ){

    int estallido=0, ganador=0, fila, columna;

    do{
        imprimirTablero(miTablero, misJugadas);
        do{
            printf("Ingrese una fila: ([1-8])");
            scanf("%d", &fila);
            printf("Ingrese una columna: ([1-8])");
            scanf("%d", &columna);
        }while((0<fila<9) && (0<columna<9) && misJugadas[fila-1][columna-1]!=0 );

        fila--;
        columna--;

        if(miTablero[fila][columna]==9){
            estallido=1;
        }else{
            realizarJugada(miTablero, misJugadas,fila,columna);
            ganador=revisarBombas(misJugadas);
        }


    }while(estallido==0 && ganador==0);


    if(estallido==1){
        printf("HAZ PERDIDO!!!\n");
        imprimirMatriz(miTablero);
    }else{
        printf("Felicidades eres un ganador!!!");

    }
}
