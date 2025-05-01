/*1)Faça uma função que recebe e soma duas matrizes*/

#include <stdio.h>
#include <stdlib.h>

void soma_matriz(int linha, int coluna, int m1[linha][coluna], int m2[linha][coluna]) {
 
    int i, j, resultado[linha][coluna];
    
    for(i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            resultado[i][j] = (m1[i][j] + m2[i][j]);
        }
    }
    
    printf("MATRIZ RESULTANTE:\n");
    for(i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            printf("  %d  ",resultado[i][j]);
        }
        printf("\n");
    }

}

int main() {

    int i, j, linha, coluna;
    
    printf("Digite a quantidade de linhas para as duas matrizes:");
    scanf("%d",&linha);
    printf("Digite a quantidade de colunas para as duas matrizes:");
    scanf("%d",&coluna);

    int m1[linha][coluna];
    int m2[linha][coluna];

    for(i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            printf("Digite os valores para a linha: %d na coluna: %d da primeira matriz:",i+1,j+1);
            scanf("%d",&m1[i][j]);
        }
    }

    for(i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            printf("Digite os valores para a linha: %d na coluna: %d da segunda matriz:",i+1,j+1);
            scanf("%d",&m2[i][j]);
        }
    }

    soma_matriz(linha,coluna,m1,m2);

    return 0;
}