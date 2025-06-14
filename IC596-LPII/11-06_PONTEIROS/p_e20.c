// 20. Crie uma função que encapsule malloc e que faça a verificação de erro no caso do malloc não
// conseguir alocar memória: 
// faça uma função alcacao_segura(size_t tamanho) e uso o malloc internamente; 
// verifique se malloc retornar NULL e, se isso acontecer, mostre uma mensagem de erro e interrompa o programa com exit(1); 
// e use essa função para alocar um vetor de inteiros.

#include <stdio.h>
#include <stdlib.h>

void* alocacao_segura(size_t tamanho) // void* aponta para qualquer tipo de dado
{
    int *ptr = malloc(tamanho);
    
    if(ptr == NULL) {
        printf("ERRO: FALHA NA ALOCAÇÃO DINÂMICA");
        exit(1);
    }

    printf("Memória alocada com sucesso: %zu bytes\n", tamanho);
    return ptr;
}

int main(void)
{
    int *vetor;
    int tamanho;

    printf("Digite o número de elementos desejado: ");
    scanf("%d", &tamanho);

    vetor = (int*) alocacao_segura(tamanho * sizeof(int));

    for(int i = 0; i < tamanho; i++) {
        printf("Digite o elemento %dº do vetor de tamanho %d: ",i+1,tamanho);
        scanf("%d", &vetor[i]);
    }

    printf("OS ELEMENTOS DO VETOR:\n");

    for(int i = 0; i < tamanho; i++) {
        printf("%4d",vetor[i]);
    }

    printf("\n");

    free(vetor);
    
    return 0;
}