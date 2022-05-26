#include <stdio.h>
#include <stdlib.h>

void main(){
    int a, b;
    a = 0;
    b = 15;
    // contando ate 15
    while (a <= 15){
        printf ("O valor de A = %d \n", a);
        a++;
    }
    printf ("Contagem regressiva \n");
    // contagem regressiva
    while (b >= 1){
        printf ("O valor de B= %d \n", b);
        b--;
    }
}