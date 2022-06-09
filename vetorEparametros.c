#include <stdio.h>
#include <stdlib.h>

void imprimevetor(int *vetor, int tamanho)
{
    int i;
    printf("Os valores do vetor sao \n");
    for (i = 0; i < tamanho; i++)
        printf("%d \n", vetor[i]);
}
void levetor(int *vetor, int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("Digite os valores do vetor \n");
        scanf("%d", &vetor[i]);
    }
}

void main()
{
    int vetor[100], tamanho;

    printf("Digite o tamanho do vetor \n");
    scanf("%d", &tamanho);

    levetor(vetor, tamanho);
    imprimevetor(vetor, tamanho);
}