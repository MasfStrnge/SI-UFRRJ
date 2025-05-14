/*Exercício 3: Aritmética de Ponteiros Simples
Crie um programa que declare um array de 5 inteiros, um ponteiro para o início do array, 
e use o ponteiro para imprimir cada elemento do array usando 
aritmética de ponteiros (sem usar a notação de colchetes).*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int array[5] = {1,2,3,4,5};
    int *ponteiro = array;

    printf("AONDE O PONTEIRO ESTÁ APONTANDO: %d\n", *ponteiro);

    for (int i = 0; i < 5; i++) {
        
        printf(" ELEMENTO %d: %d\n", i+1,*ponteiro);
        ponteiro++;

    }

    return 0;
}