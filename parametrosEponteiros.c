#include <stdio.h>
#include <stdlib.h>

void somadez(int *valor)
{
    *valor = *valor + 10;
}

void main()
{
    int a = 10;
    somadez(&a);
    printf("O valor de A somado a 10 eh %d\n", a);
}