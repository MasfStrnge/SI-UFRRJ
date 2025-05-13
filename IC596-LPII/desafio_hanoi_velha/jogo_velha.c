#include <stdio.h>
#include <stdlib.h>

char tabuleiro_matriz[3][3];

void tabuleiro() {

    int i,j;

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            tabuleiro_matriz[i][j] = ' ';
        }
    }

void mostrar_tabuleiro() {

    printf("---|---|---\n");

}
    
    
    
    printf("__|__|__\n");
    printf("__|__|__\n");
    printf("  |  |  \n");
}

int main() {

    tabuleiro();

    return 0;
}