// 23. Aloque dinamicamente uma matriz 3x3 e preencha com valores do usuário.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int **matriz = malloc(3 * sizeof(int*));

    if(matriz == NULL) {
        perror("ERRO: FALHA NA ALOCAÇÃO DINÂMICA\n");
        return 1;
    }

    for(int i = 0; i < 3; i++) {
        matriz[i] = malloc(3 * sizeof(int));
        if(matriz[i] == NULL) {
            perror("ERRO: FALHA NA ALOCAÇÃO DINAMICA\n");
            return 1;
        }
    }

    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matriz[i][j]: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 3; i++) {
        free(matriz[i]);
    }

    free(matriz);

    return 0;
}
