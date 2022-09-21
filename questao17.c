#include <stdio.h>


void soma_de_vetores (int *array1,int *array2,int *arraySoma,int t)
{
    for (int i=0;i<t;i++)// armazenando a soma dos elementos dos dois vetores
    {
        arraySoma[i] = array1[i] + array2[i];
    }

    printf("\n vetor da soma = ");
    for(int j=0;j<t;j++)// print dos elementos somados
    {
        printf("%i, ",arraySoma[j]);
    }

    printf("\n");
}

int main()
{
    int tamanho;

    printf("Informe o tamanho dos vetores: ");
    scanf("%i",&tamanho);

    int array1[tamanho];
    int array2[tamanho];
    int arraySoma[tamanho];
    
    printf("Informe os elementos dos arrays: \n");

    for(int i=0;i<tamanho;i++)
    {
        printf("elemento %d do array 1 = ",i);
        scanf("%i",&array1[i]);
        printf("elemento %d do array 2 = ",i);
        scanf("%i",&array2[i]);
    }

    printf(" array1 = ");
    for(int j1=0;j1<tamanho;j1++)
    {
        printf("%i, ",array1[j1]);
    }
    printf("\n");
    printf(" array2 = ");
    for(int j2=0;j2<tamanho;j2++)
    {
        printf("%i, ",array2[j2]);
    }
    
    printf("\n");
    soma_de_vetores(&array1,&array2,&arraySoma,tamanho);

    return 0;
}