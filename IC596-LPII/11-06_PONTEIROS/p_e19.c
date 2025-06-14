// 19. Crie uma matriz de inteiros, mas agora, use ponteiros de ponteiros.
// i. Pergunte ao usuário o número de linhas e colunas.
// ii. Use malloc para alocar um vetor de ponteiros (linhas).
// iii. Para cada linha, use malloc para alocar um vetor de inteiros (colunas).
// iv. Preencha e imprima a matriz.
// v. Verifique se malloc retornou NULL em cada etapa.
// vi. Libere cada linha e depois o vetor de ponteiros.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int **matriz, linhas, colunas;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
   
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    printf("\n");

    matriz = malloc(linhas * sizeof(int *));
    if(matriz == NULL) {
        printf("ERRO: FALHA NA ALOCAÇÃO DINÂMICA");
        return 1;
    }

    for(int i = 0; i < linhas; i++) {
        matriz[i] = malloc(colunas * sizeof(int));
        if(matriz[i] == NULL) {
            printf("ERRO: FALHA NA ALOCAÇÃO DINÂMICA");
            return 1;
        }
    }

    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("Digite o elemento: matriz[%d][%d] da matriz: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("\n");

    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("%4d",matriz[i][j]);
        }
        
        printf("\n");
    }

    for(int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }

    free(matriz);
    
    return 0;
}