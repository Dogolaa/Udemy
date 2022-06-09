#include <stdio.h>
#include <stdlib.h>

int *alocavetor(int tamanho)
{
    int *aux;

    aux = (int *)malloc(tamanho * sizeof(int));

    return aux;
}

void main()
{
    int *vetor, tamanho, i;
    printf("Digite o tamanho do vetor \n");
    scanf("%d", &tamanho);
    vetor = alocavetor(tamanho);

    for (i = 0; i < tamanho; i++)
    {
        printf("Digite o valor do vetor na posicao %d \n", i);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < tamanho; i++)
    {
        printf("o valor do vetor na posicao %d eh %d \n", i, vetor[i]);
    }
    free(vetor);
}