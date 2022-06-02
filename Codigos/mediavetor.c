#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a;
    float vetor[3], aux;
    aux = 0;
    for (a = 0; a < 3; a++)
    {
        printf("Escreva o valor do numero na posicao %d \n", a);
        scanf("%f", &vetor[a]);
    }
    for (a = 0; a < 3; a++)
    {
        printf("O valor na posicao %d e %f \n", a, vetor[a]);
    }
    for (a = 0; a < 3; a++)
    {
        aux = aux + vetor[a];
    }
    printf("A media dos 3 valores e: %.2f \n", aux / 3);
}