// 3. Alocar dinamicamente uma matriz n x m, ler os valores e imprimir a transposta da matriz.

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int linhas = 3, colunas = 3;
    int **matriz;

    matriz = malloc(linhas * sizeof(int*));
    if(matriz == NULL) {
        printf("ERRO: FALHA NA ALOCAÇÃO DE MEMÓRIA");
        return 1;
    }

    for(int i = 0; i < linhas; i++) {
        matriz[i] = malloc(colunas * sizeof(int));
        if(matriz[i] == NULL) {
            printf("ERRO: FALHA NA ALOCAÇÃO DE MEMÓRIA");
            return 1;
        }
    }

    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("Digite o valor da linha: %d da coluna: %d: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }

    for (int i = 0; i < colunas; i++) {
        printf("\n");
        for (int j = 0; j < linhas; j++) {
            printf("%d  ", matriz[j][i]);
        }
    }

    for(int i = 0; i < linhas; i++) {
            free(matriz[i]);
        }

    free(matriz);

    printf("\n");

    return 0;
}