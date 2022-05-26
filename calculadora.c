#include <stdio.h>
#include <stdlib.h>

void main()
{

    float valor1, valor2;
    int opcao;

    printf("Escreva o primeiro valor \n");
    scanf("%f", &valor1);
    printf("Escreva o segundo valor \n");
    scanf("%f", &valor2);
    printf("------CALCULADORA----- \n");
    printf("\n Opcao 1 - Somar \n Opcao 2 - Subtrair \n Opcao 3 - Multiplicar \n Opcao 4 - Dividir \n");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        printf("Resultado da soma: %.2f \n", valor1 + valor2);
        break;
    case 2:
        printf("Resultado da subtracao: %.2f \n", valor1 - valor2);
        break;
    case 3:
        printf("O resultado da multiplicacao: %.2f \n", valor1 * valor2);
        break;
    case 4:
        printf("O valor da divisao: %.2f \n", valor1 / valor2);

    default:
        printf("Opcao invalida \n");

        break;
    }
}
