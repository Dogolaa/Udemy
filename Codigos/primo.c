#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a, b, cont;

    printf("Insira um valor para descobrir se o numero e primo ou nao \n");
    scanf("%d", &a);
    cont = 0;

    for (b = 1; b <= a; b++)
    {
        printf("O resto entre %d e %d eh = %d \n", a, b, a % b);
        if (a % b == 0)
        {
            cont++;
        }
    }
    if (cont == 2)
    {
        printf("-----O NUMERO %d EH PRIMO-----\n", a);
    }
    else
    {
        printf("-----O NUMERO %d  NAO EH PRIMO-----\n", a);
    }
}
