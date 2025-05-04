/*4)Faça uma função que some os valores de uma matriz*/

#include <stdio.h>
#include <stdlib.h>

int soma_valores_matriz(int linha,int coluna, int matriz[linha][coluna]) {

    int i,j;
    int soma = 0;
 
    for(i=0;i<linha;i++) {
        for(j=0;j<coluna;j++) {
            soma += matriz[i][j];
        }
    }

    return soma;

}

int main() {

    int i, j, linha, coluna;
      
    printf("Digite quantas linhas a matriz deve ter:\n");
    scanf("%d",&linha);
    printf("Digite quantas colunas a matriz deve ter:\n");
    scanf("%d",&coluna);
    
    int matriz[linha][coluna];
    
    for(i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            printf("Digite os valores para a linha: %d na coluna: %d da matriz: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }

    printf(" A MATRIZ:\n");
    for(i=0;i<linha;i++) {
        for(j=0;j<coluna;j++) {
            printf("|%d|",matriz[i][j]);
        }
        
        printf("\n"); 
    }
    
    int soma = soma_valores_matriz(linha,coluna,matriz);
    printf("A soma dos valores da matriz é: %d\n",soma);

    return 0;
}