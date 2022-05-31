#include <stdlib.h>
#include <stdio.h>

void main()
{
    int vetor[10], cont;

    for (cont = 0; cont < 10; cont++)
    {
        printf("Digite o valor do vetor %d \n", cont);
        scanf("%d", &vetor[cont]);
    }
    for (cont = 0; cont < 10; cont++)
    {
        printf("O valor do vetor %d eh: %d \n", cont, vetor[cont]);
    }
}