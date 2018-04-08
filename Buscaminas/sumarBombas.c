#include "validarCasilla.h"

int sumarBombas(int matriz[8][8], int fila, int columna){

    int total=0, x ,y, casillaValida;


    for(x=-1;x<2;x++){
        for(y=-1;y<2;y++){

            casillaValida=validarCasilla(fila, columna, x, y);

            if(casillaValida && matriz[fila+x][columna+y]==9 ){
                    total++;
            }
        }
    }

    return total;

}
