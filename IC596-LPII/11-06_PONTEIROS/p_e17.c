// 17. Faça um código que modifique o tamanho de um vetor durante a execução.
// a. Alocar um vetor de n inteiros com malloc.
// b. Peça ao usuário se deseja adicionar mais elementos.
// c. Se sim, use realloc para dobrar o tamanho do vetor.
// d. Continue lendo novos valores até o usuário parar.
// e. Imprima todos os valores lidos.
// f. Verifique se realloc retornou NULL antes de continuar.
// g. Libere a memória.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *vetor, tamanho = 0;

    printf("Digite a quantidade de valores");
    vetor = malloc(tamanho * sizeof(int));

}