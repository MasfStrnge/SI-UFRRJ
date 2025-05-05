/*5) faça uma função que retorna o resultado da multiplicação de duas matrizes, se for possível multiplicá-las*/

#include <stdio.h>
#include <stdlib.h>

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

    int main() {
        
        int l1, c1, l2, c2, i, j;
    
        printf("Digite o número de linhas da matriz 1: ");
        scanf("%d", &l1);
        printf("Digite o número de colunas da matriz 1: ");
        scanf("%d", &c1);
    
        printf("Digite o número de linhas da matriz 2: ");
        scanf("%d", &l2);
        printf("Digite o número de colunas da matriz 2: ");
        scanf("%d", &c2);
    
        if (c1 != l2) {
            printf("Multiplicação não é possível: colunas da M1 (%d) != linhas da M2 (%d)\n", c1, l2);
            return 1;
        }
    
        int m1[l1][c1], m2[l2][c2], resultado[l1][c2];
    
        // Entrada da matriz 1
        printf("Digite os valores da MATRIZ 1:\n");
        for(i = 0; i < l1; i++) {
            for(j = 0; j < c1; j++) {
                printf("M1[%d][%d]: ", i+1, j+1);
                scanf("%d", &m1[i][j]);
            }
        }
    
        // Entrada da matriz 2
        printf("Digite os valores da MATRIZ 2:\n");
        for(i = 0; i < l2; i++) {
            for(j = 0; j < c2; j++) {
                printf("M2[%d][%d]: ", i+1, j+1);
                scanf("%d", &m2[i][j]);
            }
        }
    
        // Multiplicação
        multiplica_matrizes(l1, c1, c2, m1, m2, resultado);
    
        // Exibição do resultado
        printf("\nMATRIZ RESULTADO:\n");
        for(i = 0; i < l1; i++) {
            for(j = 0; j < c2; j++) {
                printf("|%d|", resultado[i][j]);
            }
            printf("\n");
        }
    
        return 0;
    }

