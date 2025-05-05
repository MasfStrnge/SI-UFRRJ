/*3) Faça uma função que calcule a determinante de uma matriz*/
#include <stdio.h>
#include <stdlib.h>

int determinante(int ordem, int matriz[ordem][ordem]) {
    int det = 0;

    if (ordem == 2) {
        det = matriz[0][0]*matriz[1][1] - matriz[0][1]*matriz[1][0];
    } else if (ordem == 3) {
        det = matriz[0][0]*matriz[1][1]*matriz[2][2]
            + matriz[0][1]*matriz[1][2]*matriz[2][0]
            + matriz[0][2]*matriz[1][0]*matriz[2][1]
            - matriz[0][2]*matriz[1][1]*matriz[2][0]
            - matriz[0][0]*matriz[1][2]*matriz[2][1]
            - matriz[0][1]*matriz[1][0]*matriz[2][2];
    } else {
        printf("Determinante só menor que 3.\n");
    }

    return det;
}

int main() {
    int ordem, i, j;

    printf("Digite a ordem da matriz (2 ou 3): ");
    scanf("%d", &ordem);

    if (ordem != 2 && ordem != 3) {
        printf("Somente matrizes 2x2 ou 3x3 são aceitas.\n");
        return 1;
    }

    int matriz[ordem][ordem];

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < ordem; i++) {
        for (j = 0; j < ordem; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Determinante = %d\n", determinante(ordem, matriz));

    return 0;
}