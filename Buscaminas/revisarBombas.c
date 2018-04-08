int revisarBombas(int matriz[8][8]){

    int total=0;
    int fila, columna;

    for(fila=0;fila<8;fila++){
        for(columna=0;columna<8;columna++){

            if(matriz[fila][columna]==0){
                   total++;
            }
        }
    }

    printf("%d\n", total);

    if(total==10){
        return 1;
    }else{
        return 0;
    }
}





