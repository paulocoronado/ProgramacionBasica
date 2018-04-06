#include <stdio.h>
#include <stdlib.h>
#include "figuras.h"



int main()
{

    int tamanno;

    printf("Ingrese un entero (1-10)");
    scanf("%d",&tamanno);

    cuadro(tamanno);
    triangulo(tamanno);
    marco(tamanno);
    rombo(tamanno);


}
