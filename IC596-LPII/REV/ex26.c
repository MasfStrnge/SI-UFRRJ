// 26. Crie um vetor com malloc e aumente seu tamanho com realloc.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tamanho = 5;
    int *vetor = malloc(tamanho * sizeof(int));

    if(vetor == NULL) {
        perror("ERRO: FALHA NA ALOCAÇÃO DINÂMICA");
        return 1;
    }

    for(int i = 0; i < tamanho; i++) {
        vetor[i] = 0;
    }

    int novoTamanho = 10;

    int *temp = realloc(vetor, novoTamanho * sizeof(int));

    if(temp == NULL) {
        perror("ERRO: FALHA NA REALOCAÇÃO DE MEMÓRIA");
        return 1;
    }

    vetor = temp;

    for(int i = tamanho; i < novoTamanho; i++) {
        vetor[i] = 0;
    }

    for(int i = 0; i < novoTamanho; i++) {
        printf("%d ",vetor[i]);
    }

    printf("\n");

    free(vetor);

    return 0;
}