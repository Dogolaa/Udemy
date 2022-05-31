#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a, b, cont;
    char opcao;
    printf("Deseja verificar se um numero e primo ? (s/n)");
    scanf("%c", &opcao);
    while (opcao == 's')
    {

        printf("Insira um valor para descobrir se o numero e primo ou nao \n");
        scanf("%d", &a);
        cont = 0;

        switch (opcao)
        {
        case 1:
            
            break;

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

}
