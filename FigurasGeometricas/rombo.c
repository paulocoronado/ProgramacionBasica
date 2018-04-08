void rombo(int tamanno)
{

    printf("\n--------- ROMBO --------\n\n");

    int i, j;

    //Para la parte superior del rombo
    for(i=1; i<=tamanno; i++)
    {
        for(j=1; j<=(i+tamanno-1); j++)
        {

            if(j<(tamanno-i+1))
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

    //Para la parte inferior del rombo

    for(i=tamanno-1; i>0; i--)
    {
        for(j=1; j<=(i+tamanno-1); j++)
        {

            if(j<(tamanno-i+1))
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
