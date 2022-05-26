#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{

    // Gerador de numero aleatorio

    srand((unsigned)time(NULL));

    // variavel que recebe o numero aleatorio
    int a;
    a = rand() % 11;

    printf(" o numero e: \n %d \n", a);
}