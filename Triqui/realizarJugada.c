#include "constantes.h"

void realizarJugada(char matriz[FILAS][COLUMNAS], char turno)
{

    int fila;
    int columna;
    int casillaValida;

    do
    {
        printf("Ingrese la fila:\n");
        scanf("%d", &fila);

        printf("Ingrese la Columna:\n");
        scanf("%d", &columna);

        if (matriz[fila][columna] != 'X' && matriz[fila][columna] != 'O'){
            casillaValida=1;
            matriz[fila][columna]=turno;
        }else{
            casillaValida=0;
            printf("CASILLA NO VALIDA\n");
        }


    } while(casillaValida==0);


}

