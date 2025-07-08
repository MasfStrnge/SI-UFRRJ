// 24. Use calloc para alocar um vetor e verifique os valores iniciais (devem ser zero).

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int tamanho = 5;
    int *vetor = calloc(tamanho,sizeof(int));

    if(vetor == NULL) {
        perror("ERRO: FALHA NA ALOCAÇÃO DINÂMICA\n");
        return 1;
    }

    for(int i = 0; i < tamanho; i++) {
        printf("%d ",vetor[i]);
    }

    printf("\n");

    free(vetor);

    return 0;
}