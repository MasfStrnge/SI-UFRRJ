/*Exercício 2: Modificação via Ponteiro
Escreva um programa que:

Declare uma variável do tipo float
Crie um ponteiro para essa variável
Use o ponteiro para modificar o valor da variável
Imprima o valor antes e depois da modificação*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float peso = 5.6;
    float *ponteiro = &peso;

    printf("O VALOR DA VARIÁVEL ANTES DA MODIFICAÇÃO: %.1f\n", peso);
    *ponteiro = 6.0;
    printf("O VALOR DA VARÁVEL DEPOIS DA MODIFICAÇÃO: %.1f\n", peso);

    return 0;

}