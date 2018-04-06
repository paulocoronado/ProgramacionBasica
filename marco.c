void marco(int tamanno)
{


    printf("\n--------- MARCO --------\n\n");

    int i, j;

    for(i=1; i<=tamanno; i++)
    {
        for(j=1; j<=tamanno; j++)
        {

            if(j!=1 && j!= tamanno && i!=1 && i!=tamanno)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

}
