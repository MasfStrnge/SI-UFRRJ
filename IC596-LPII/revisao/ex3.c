// 3. Alocar dinamicamente um vetor de n inteiros, ler os valores do usuário e calcular a média.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tamanho = 5, soma = 0;
    float media;
    int *vetor = malloc(tamanho * sizeof(int));
    
    if(vetor == NULL) {
        printf("ERRO: FALHA NA ALOCAÇÃO DE MEMÓRIA");
        return 1;
    }

    for(int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d do total de %d valores: ", i+1,tamanho);
        scanf("%d",&vetor[i]);
        soma += vetor[i];
    }

    media = (float)soma/tamanho;

    printf("A MÉDIA DOS VALORES DO VETOR É DE %.2f\n",media);

    return 0;
}