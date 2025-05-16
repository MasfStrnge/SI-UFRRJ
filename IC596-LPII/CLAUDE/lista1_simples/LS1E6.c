/*Exercício 6: Encontrar Menor e Maior
Escreva uma função que receba um array de inteiros e seu tamanho, 
e retorne o menor e o maior valor através de ponteiros.*/

#include <stdio.h>
#include <stdlib.h>

void menor_maior_valor(int array[], int tamanho_array, int maior, int menor) {
    
    menor = 1000;
    maior = -1000;

    for (int i = 0; i < tamanho_array; i++) {
        if (array[i] < menor) {
            menor = array[i];
        }
        else if (array[i] > maior) {
            maior = array[i];
        }
    }
}


int main() {

    int tamanho_array, maior, menor;
    
    printf("Digite um número inteiro para o tamanho de um array ou vetor:\n");
    scanf("%d",&tamanho_array);

    int array[tamanho_array];

    for (int i = 0;i < tamanho_array; i++) {
        printf("Digite o valor %d ao array:\n",i+1);
        scanf("%d",&array[i]);
                                   
    }

    menor_maior_valor(array[tamanho_array],tamanho_array,maior,menor);

    printf("O Maior elemnto do array é: %d \n", menor);
    printf("O Menor elemento do array é: %d\n", maior);

    return 0;

}