#include <stdio.h>
#include <stdlib.h>

void main()
{
    int matriz[2][2], i, j;

    // Le a matriz normalmente

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Escreva o valor da posicao %d, %d da matriz \n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // percorre a matriz enquanto o i for igual a 0 decrementando-o, iniciando no tamanho maximo da matriz

    for (i = 1; i >= 0; i--)
    {
        printf("\n");

        // percorre a matriz enquanto o j for igual a 0 decrementando-o, iniciando no tamanho maximo da matriz

        for (j = 1; j >= 0; j--)
        {
            printf("%d ", matriz[i][j]);
        }
    }
    printf("\n");
}