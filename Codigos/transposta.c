#include <stdio.h>
#include <stdlib.h>

void main()
{
    int matriz[100][100], i, j, tami, tamj;

    printf("Digite o numero de linhas da matriz \n");
    scanf("%d", &tami);
    printf("Digite o numero de colunas da matriz \n");
    scanf("%d", &tamj);

    for (i = 0; i < tami; i++)
    {
        for (j = 0; j < tamj; j++)
        {
            printf("Escreva o valor da posicao %d, %d da matriz \n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("A transposta da matriz:");

    for (i = 0; i < tami; i++)
    {
        printf("\n");
        for (j = 0; j < tamj; j++)
        {
            printf("%d ", matriz[i][j]);
        }printf("\n");
    }
    printf("\n");

    printf("EH:");
    for (i = 0; i < tami; i++)
    {
        printf("\n");
        for (j = 0; j < tamj; j++)
        {
            printf("%d ", matriz[j][i]);
        }
    }
    printf("\n");
}