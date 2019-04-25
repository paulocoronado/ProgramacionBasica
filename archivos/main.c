#include<stdio.h>
#include<string.h>
#include <stdbool.h>

/**
* Gestor CSV
*/


FILE *miArchivo;
char lineaTexto[100];
float promedio=0;
float sumatoria=0;
int totalCreditos=0;


bool abrirArchivo(){

    miArchivo=fopen("archivo.txt","r");
    if(miArchivo==NULL){
            printf("El archivo no se pudo abrir\n");
            return false;

    }else{
            printf("Archivo abierto con éxito!!!\n");

    }
    return true;
}

bool leerLinea(){

    if(fgets(lineaTexto,100, miArchivo)!=NULL){
        return true;
    }else{
        return false;
    }
}

bool imprimirLinea(){

    puts(lineaTexto);
}

int analizarLinea(){

    char *codigo;
    char *nombre;
    char *asignatura;
    char *snota;
    char *screditos;

    int nota;
    int creditos;


    codigo = strtok(lineaTexto, ",");
    nombre = strtok(NULL, ",");
    asignatura = strtok(NULL, ",");
    snota = strtok(NULL, ",");
    nota=atoi(snota);

    screditos = strtok(NULL, ",");
    creditos=atoi(screditos);

    totalCreditos=totalCreditos+creditos;
    sumatoria=sumatoria+creditos*nota;




    return 1;

}


int main(){

    abrirArchivo();

    while(leerLinea()){
        imprimirLinea();
        analizarLinea();
    }

    printf("El promedio acumulado es: %.2f", sumatoria/totalCreditos);
}
