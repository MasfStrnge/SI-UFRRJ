// 27. Crie uma função que recebe um vetor alocado e retorna o maior valor.

#include <stdio.h>
#include <stdlib.h>

int maiorValor(int *vetor, int tamanho) {
    int maior = *vetor;
    
    for(int i = 1; i < tamanho; i++) {
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
        perror("ERRO: FALHA NA ALOCAÇÃO DINÂMICA");
        return 1;
    }

    for(int i = 0; i < tamanho; i++) {
        printf("Digite o %dº valor: ",i+1);
        scanf("%d",&vetor[i]);
    }

    printf("O maior valor do array é: %d\n", maiorValor(vetor, tamanho));

    free(vetor);

    return 0;

}