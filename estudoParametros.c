#include <stdio.h>
#include <stdlib.h>

// cria a funcao e mostra dentro dos parenteses o que vai receber
void mostrasoma(int primeirovalor, int segundovalor)
{
    printf("A soma entre %d e %d eh %d \n", primeirovalor, segundovalor, primeirovalor + segundovalor);
}
// funcao com a possibilidade de retornar um valor inteiro, recebendo-os
int retornasoma(int primeirovalor, int segundovalor)
{
    return primeirovalor + segundovalor;
}

void main()
{
    int a = 5, b = 7;

    // envia os valores entre parenteses para a funcao chama
    mostrasoma(a, b);
    // envia os valores para o retornasoma
    printf("\n O valor da soma eh %d \n", retornasoma(a, b));
}