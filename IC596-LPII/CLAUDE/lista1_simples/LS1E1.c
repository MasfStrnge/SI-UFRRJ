/*Exercício 1: Declaração e Acesso
Escreva um programa que:

-Declare uma variável inteira e inicialize com um valor
-Declare um ponteiro para essa variável
-Imprima: o valor da variável, o endereço da variável, o valor do ponteiro e o valor apontado pelo ponteiro*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade = 10;
    int *ponteiro = &idade;

    printf("O VALOR DE IDADE: %d\n", idade);
    
    printf("O ENDEREÇO DE IDADE: %p\n", &idade);
    
    printf("O VALOR DO PONTEIRO: %p\n", ponteiro);
    
    printf("O VALOR APONTADO PELO PONTEIRO: %d\n", *ponteiro);

    return 0;

}