#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

/*Ao armazenar um valor em b, e criar um ponteiro que aponte para o endereço de B, é possível modificar o valor armazenado na variavel com o *

int b, *ponteiro;
b = 10;
ponteiro = &b
*ponteiro = 5
b = 5;
*/

int main()
{
    int b, *ponteiro;

    cout << "Escreva um valor pra variavel b \n";
    cin >> b;
    cout << "\nO valor da variavel b eh: " << b << "\n";
    ponteiro = &b;
    cout << "Escreva o novo valor pra variavel b \n";
    cin >> *ponteiro;
    cout << "\nO valor da variavel b eh: " << b << "\n";

    return 0;
}
