// 6. Criar uma função que receba um vetor e seu tamanho e retorne o maior valor.

#include <stdio.h>
#include <stdlib.h>

int maiorValor(int *vetor,int tamanho) {
    int maior = vetor[0];

    for(int i = 0; i < tamanho; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    return maior;

}

int main(void)
{
    int tamanho = 5;
    int *vetor = malloc(tamanho * sizeof(int));
    if(vetor == NULL) {
        printf("ERRO: FALHA NA ALOCAÇÃO DINÂMICA");
        return 1;
    }

    for(int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d de um total de %d: ", i+1, tamanho);
        scanf("%d",&vetor[i]);
    }

    printf("O maior elemento do vetor é: %d\n",maiorValor(vetor,tamanho));

    free(vetor);

    return 0;
}