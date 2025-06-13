// 14. Implemente uma função que retorne o ponteiro para o maior elemento de um vetor. A função
// pode receber o ponteiro para o vetor (array) e o seu tamanho.

#include <stdio.h>

int *maior_elemento(int *array, int tamanho)
{
    int *ponteiro_maior = &array[0];
    
    for(int i = 1; i < tamanho; i++)
    {
        if (array[i] > *ponteiro_maior) {
            ponteiro_maior = &array[i]; 
        }
    }
    return ponteiro_maior;
}

int main(void)
{
    int array[5] = {10, 40, 100, 1, 2};
    int tamanho = 5;
    
    int *ptr_maior = maior_elemento(array, tamanho);
    
    printf("O maior elemento do array é: %d\n", *ptr_maior);
    
    return 0;
}