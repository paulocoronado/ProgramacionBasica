void LlenarTablero(int matriz[3][3] , int totalFilas, int totalColumnas){

int i,j;
    for(i=0; i<totalFilas; i++){

        printf("|");

        for(j=0; j<totalFilas; j++){

                switch(matriz[i][j]){
                    case 1:
                        printf(" X |");
                        break;
                    case 2:
                        printf(" O |");
                        break;
                    default:
                        printf("   |");
                        break;
                }
        }
        printf("\n");
    }

}
