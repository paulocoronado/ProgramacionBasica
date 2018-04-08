#include <stdio.h>
#include <stdlib.h>
#include "imprimirMatriz.h"
#include "llenarMatriz.h"
#include "colocarBombas.h"
#include "colocarTotales.h"
#include "juego.h"

int main()
{

    int tablero[8][8];
    int tableroCasillas[8][8];
    srand(time(NULL));
    llenarMatriz(tablero,0);
    llenarMatriz(tableroCasillas,0);
    colocarBombas(tablero);
    colocarTotales(tablero);
    juego(tablero, tableroCasillas);
    return 0;
}
