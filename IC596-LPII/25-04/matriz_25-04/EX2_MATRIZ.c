/*2) Faça outra função para retornar a transposta de uma matriz 
passado por referência:*/

#include <stdio.h>
#include <stdlib.h>

void transposta(int linha, int coluna,int matriz[linha][coluna], int resultado[linha][coluna]) {

    int i,j;
      
    for(i=0;i<coluna;i++) {
        for(j=0;j<linha;j++) {
            resultado[i][j] = matriz[j][i];
        }
    }

}

int main() {

    int linha, coluna, i, j;

    printf("Digite quantas linhas a matriz deve ter:\n");
    scanf("%d",&linha);
    printf("Digite quantas colunas a matriz deve ter:\n");
    scanf("%d",&coluna);
    
    int matriz[linha][coluna];
    int resultado[coluna][linha];
    
    for(i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            printf("Digite os valores para a linha: %d na coluna: %d da matriz: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("A MATRIZ ORIGINAL:\n");
    for(i=0;i<linha;i++) {
        for(j=0;j<coluna;j++) {
            printf("|%d|",matriz[i][j]);
        }
        
        printf("\n"); 
    }

    transposta(linha,coluna,matriz,resultado);

    printf("\n");

    printf("A MATRIZ TRANSPOSTA:\n");
    for(i=0;i<coluna;i++) {
        for(j=0;j<linha;j++) {
            printf("|%d|",resultado[i][j]);
        }
        
        printf("\n"); 
    }


    return 0;
    
}