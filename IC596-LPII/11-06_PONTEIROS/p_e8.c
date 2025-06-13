//8) Escreva um programa que aloque dinamicamente um array de n inteiros. Depois, preencha o
//   array com valores de 1 a n e imprima os valores

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int *array, n = 0, valor = 0;    
   
    while (n >= 0) {
   
    printf("Digite o tamanho de um array: ");
    scanf("%d",&n);
    
    array = malloc(n * sizeof(int));

    for(int i = 0; i < n; i++) {
        printf("Digite %dº elemento em um array de %d elementos: ",i+1,n);
        scanf("%d",&valor);
        array[i] = valor;
    }
    
    printf("Os elementos do array: ");
    
    for(int i = 0; i < n; i++) {
        printf(" %d",array[i]);
    }

    printf("\n");
    
    }
    
    return 0;
}