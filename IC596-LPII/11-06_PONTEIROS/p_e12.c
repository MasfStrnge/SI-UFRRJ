// 12) Crie uma matriz dinâmica de m linhas e n colunas. Depois, preencha essa matriz com números.
// Por fim, imprima o conteúdo da matriz.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int **matriz;
    int n = 3, m = 3;

    matriz = calloc(n,(sizeof(int*)));

    for(int i = 0; i < n; i++) {
        matriz[i] = calloc(m,(sizeof(int)));

    }

    printf("Preencha a matriz:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\n");
    
    printf("Conteúdo da matriz:\n");
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

}