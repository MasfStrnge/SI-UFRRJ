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
    int *vetor, tamanho = 0, escolha;


    while(tamanho >= 0) {
    
        printf("Digite a quantidade de elementos vetor (digite um valor negativo para finalizar): ");
        scanf("%d",&tamanho);

        vetor = malloc(tamanho * sizeof(int));
    
        if (vetor == NULL) {
            printf("ERRO: FALHA NA ALOCAÇÃO DE MEMÓRIA");
            return 1;
        }

        for(int i = 0; i < tamanho; i++) {
            printf("Digite o %dº elemento de um total de %d elementos: ", i+1, tamanho);
            scanf("%d",&vetor[i]);
        }
        printf("\n");

        printf("O elementos do vetor de tamanho %d: ", tamanho);
        for(int i = 0; i < tamanho; i++) {
            printf("%d ",vetor[i]);
        }
        
        printf("\n");
        
        printf("Deseja adicionar mais elementos?\n");
        printf("1 - SIM, 2 - NÃO\n");
        scanf("%d", &escolha);

        if (escolha == 1) {
            int novo_tamanho = tamanho * 2;
            int *temp = realloc(vetor, novo_tamanho * sizeof(int));
            
            if (temp == NULL) {
                printf("ERRO: FALHA NA ALOCAÇÃO DE MEMÓRIA");
                return 1;
            } 
            
            vetor = temp;
        
            for(int i = (novo_tamanho/2); i < novo_tamanho; i++) {
                printf("Digite o %dº elemento de um total de %d elementos: ", i+1, novo_tamanho);
                scanf("%d",&vetor[i]);   
            }
            
            printf("Os novos elementos do vetor (agora com tamanho: %d): ", novo_tamanho);
            for(int i = 0; i < novo_tamanho; i++) {
                printf("%d ",vetor[i]);
            }
        }    
        free(vetor);
    }
    
    return 0;
}