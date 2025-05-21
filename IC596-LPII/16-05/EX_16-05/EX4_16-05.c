/*4) Gere a transposta de uma matriz recebida por parâmetro.*/

#include <stdio.h>
#include <stdlib.h>

void transposta_matriz(int matriz[3][3], int resultado[3][3]) {
    int i,j;

    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
           resultado[i][j] = matriz[j][i];
        }
    }
}

int main() {
    
    int i,j;
    int matriz[3][3] = {{12,67,44},{34,98,56},{33,22,10}};
    int transposta[3][3];

    transposta_matriz(matriz,transposta);

    printf("A MATRIZ ORIGINAL:\n");
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            printf("%d  ",matriz[i][j]);
        }

        printf("\n");

    }

    printf("A MATRIZ TRANSPOSTA:\n",transposta[i][j]);
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            printf("%d  ",transposta[i][j]);
        }
    
        printf("\n");
    
    }

    return 0;

}