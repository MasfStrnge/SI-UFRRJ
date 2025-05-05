/*6) Faça um programa que use todas as funções de matrizes das questões
anteriores e apresente o resultado*/

#include <stdio.h>
#include <stdlib.h>

void soma_matriz(int linha, int coluna, int m1[linha][coluna], int m2[linha][coluna]) {
    int i, j, resultado[linha][coluna];

    for(i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            resultado[i][j] = (m1[i][j] + m2[i][j]);
        }
    }

    printf("RESULTADO DA SOMA DE MATRIZES:\n");
    for(i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            printf("|%d|",resultado[i][j]);
        }
        printf("\n");
    }
}

void transposta(int linha, int coluna,int matriz[linha][coluna], int resultado[coluna][linha]) {
    int i,j;
    for(i=0;i<coluna;i++) {
        for(j=0;j<linha;j++) {
            resultado[i][j] = matriz[j][i];
        }
    }
}

int determinante(int linha,int coluna, int m1[linha][coluna]) {
    int det = 0;

    if (linha == 2 && coluna == 2) {
        det = m1[0][0]*m1[1][1] - m1[0][1]*m1[1][0];
    } else if (linha == 3 && coluna == 3) {
        det = m1[0][0]*m1[1][1]*m1[2][2]
            + m1[0][1]*m1[1][2]*m1[2][0]
            + m1[0][2]*m1[1][0]*m1[2][1]
            - m1[0][2]*m1[1][1]*m1[2][0]
            - m1[0][0]*m1[1][2]*m1[2][1]
            - m1[0][1]*m1[1][0]*m1[2][2];
    } else {
        printf("Determinante ainda não implementado para ordem > 3.\n");
    }

    return det;
}

int soma_valores_matriz(int linha,int coluna, int m1[linha][coluna]) {
    int i,j;
    int soma = 0;

    for(i=0;i<linha;i++) {
        for(j=0;j<coluna;j++) {
            soma += m1[i][j];
        }
    }
    return soma;
}

void multiplica_matrizes(int l1, int c1, int c2, int m1[l1][c1], int m2[c1][c2], int resultado_multi[l1][c2]) {
    int i, j, k;
    for(i = 0; i < l1; i++) {
        for(j = 0; j < c2; j++) {
            resultado_multi[i][j] = 0;
            for(k = 0; k < c1; k++) {
                resultado_multi[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

int main() {
    int i,j,linha,coluna;

    printf("Digite o número de linhas: ");
    scanf("%d", &linha);
    printf("Digite o número de colunas: ");
    scanf("%d", &coluna);

    int m1[linha][coluna];
    int m2[linha][coluna];

    for(i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            printf("Digite os valores para a linha: %d na coluna: %d da matriz 1: ",i+1,j+1);
            scanf("%d",&m1[i][j]);
        }
    }

    for(i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            printf("Digite os valores para a linha: %d na coluna: %d da matriz 2: ",i+1,j+1);
            scanf("%d",&m2[i][j]);
        }
    }

    soma_matriz(linha,coluna,m1,m2);
    printf("\n");

    printf("A MATRIZ ORIGINAL:\n");
    for(i=0;i<linha;i++) {
        for(j=0;j<coluna;j++) {
            printf("|%d|",m1[i][j]);
        }
        printf("\n");
    }

    int resultado[linha][coluna];
    transposta(linha,coluna,m1,resultado);

    printf("\n");
    printf("A MATRIZ TRANSPOSTA:\n");
    for(i=0;i<coluna;i++) {
        for(j=0;j<linha;j++) {
            printf("|%d|",resultado[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Determinante = %d\n", determinante(linha,coluna,m1));
    printf("Soma dos valores da matriz 1 = %d\n", soma_valores_matriz(linha,coluna,m1));

    if (coluna == linha) {
        int resultado_multi[linha][coluna];
        multiplica_matrizes(linha, coluna, coluna, m1, m2, resultado_multi);

        printf("\nMATRIZ MULTIPLICADA:\n");
        for(i = 0; i < linha; i++) {
            for(j = 0; j < coluna; j++) {
                printf("|%d|", resultado_multi[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Multiplicação não possível com as dimensões fornecidas.\n");
    }

    return 0;
}
