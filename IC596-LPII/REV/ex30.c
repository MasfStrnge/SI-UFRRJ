// 30. Implemente uma função que libere toda a memória alocada para uma lista de alunos.

#include <stdio.h>
#include <stdlib.h>

void liberaMemoria(char **lista, int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        free(lista[i]);
    }

    free(lista);

    printf("MEMÓRIA LIBERADA COM SUCESSO!!!!\n");
}

int main(void) 
{
    int tamanho;

    printf("Digite a quantidade de alunos que deseja cadastrar: ");
    scanf("%d",&tamanho);
    
    char **lista = malloc(tamanho * sizeof(char*));
    
    if(lista == NULL) {
        perror("ERRO: FALHA NA ALOCAÇÃO DINÂMICA");
        return 1;
    }

    for(int i = 0; i < tamanho; i++) {
        lista[i] = malloc(200 * sizeof(char));

        if(lista[i] == NULL) {
            perror("ERRO: FALHA NA ALOCAÇÃO DINÂMICA");
            return 1;
        }
    }

    for(int i = 0; i < tamanho; i++) {
        printf("Digite o nome do %dº aluno: ",i+1);
        scanf("%s",lista[i]);
    }

    for(int i = 0; i < tamanho; i++) {
        printf("%d - %s\n",i+1,lista[i]);
    }

    liberaMemoria(lista,tamanho);

    return 0;
}