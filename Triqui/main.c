#include <stdio.h>
#include <stdlib.h>
#include "constantes.h"
#include "funciones.h"

int main()
{

    char tablero[FILAS][COLUMNAS];
    limpiarTablero(tablero);
    imprimirTablero(tablero);

    tablero[0][0]=tablero[1][1]='O';

    int continuar;
    int turno='O';
    int jugadas=0;

    do{
        realizarJugada(tablero, turno);

        jugadas++;

        if(turno=='O'){
            turno='X';
        }else{
             turno='O';
        }
        continuar=revisarTriqui(tablero);
        imprimirTablero(tablero);

    }while(continuar==0 && jugadas<9);

    if(jugadas==9){

        printf("EMPATE");

    }else{

        printf("%c HA PERDIDO", turno);
    }

    return 0;
}
