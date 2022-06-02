#include <stdio.h>
#include <stdlib.h>

void main()
{
    int matriz[3][3], i, j, vetor[9], a = 0, quebra = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Escreva o valor da posicao %d, %d da matriz \n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
    }
    printf("\n Outro metodo \n");

    // Metodo de Cuzao

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            vetor[a] = matriz[i][j];
            a++;
        }
    }
    for (a = 1; a <= 9; a++)
    {
        if (a % 3 == 0)
        {
            printf("%d", vetor[quebra]);
            printf("\n");
        }
        else
        {
            printf("%d", vetor[quebra]);
        }

        quebra++;
    }
}
