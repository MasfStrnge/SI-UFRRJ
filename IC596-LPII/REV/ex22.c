// 22. Aloque dinamicamente um vetor de n inteiros, leia e imprima os valores.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tamanho = 5;
    int *vetor = malloc(tamanho * sizeof(int));
    
    if(vetor == NULL) {
        perror("ERRO: FALHA NA ALOCAÇÃO DINAMICA\n");
        return 1;
    }

    for(int i = 0; i < tamanho; i++) {
        printf("Digite o %dº valor de um array de tamanho %d: ",i+1,tamanho);
        scanf("%d",&vetor[i]);
    }

    printf("OS VALORES DO VETOR: ");
    for(int i = 0; i < tamanho; i++) {
        printf("%d ",vetor[i]);
    }

    free(vetor);

    return 0;
}
