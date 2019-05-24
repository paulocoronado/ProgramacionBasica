#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Puntos

    double x1,y1,x2,y2, x, y, m, b;

    double ax1,ay1,ax2,ay2, ax, ay, ma, ba;

    //(0,0) a (5,5)
    x1=1;
    y1=2;

    x2=3;
    y2=5;


    //(0,3) a (7,0)
    ax1=0;
    ay1=7;

    ax2=4;
    ay2=0;





    //Ecuacion de la recta
    //y=m*x+b

    //Calcular la pendiente

    m=(y2-y1)/(x2-x1);
    ma=(ay2-ay1)/(ax2-ax1);

    printf("Pendiente:(%f)\n", m);


    //como tenemos un punto podemos despejar b

    b= y1-m*x1;
    ba= ay1-ma*ax1;

    //Calcular un conjunto de puntos que pertenecen a esa recta

    for(x=x1; x<=x2;x=x+0.05){

            y=m*x+b;

            ax=x;
            ay=ma*ax+ba;

            //printf("%lf\n", fabs(y-ay));

            if(fabs(y-ay)<0.01){

                printf("\n En este punto se intersectan: Punto:(%lf,%lf) (%lf,%lf)\n", x, y,ax,ay);

            }


    }
    return 0;
}
