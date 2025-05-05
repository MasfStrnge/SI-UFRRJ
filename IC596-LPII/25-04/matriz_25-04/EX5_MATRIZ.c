/*5) faça uma função que retorna o resultado da multiplicação de duas matrizes, se for possível multiplicá-las*/

#include <stdio.h>
#include <stdlib.h>

long long int multi_matriz(int linha, int coluna, int m1[linha][coluna],int m2[linha][coluna]) {

    int i,j;
    int resultado[linha][coluna];

    for(i=0;i<linha;i++) {
        for(j=0;j<coluna;j++) {
            resultado[i][j] = 1;
        }
    }
 
    for(i=0;i<linha;i++) {
        for(j=0;j<coluna;j++) {
            resultado[i][j] = (m1[i][j] * m2[i][j]);
        }
    }

    return resultado[linha][coluna];

}

int main() {

    int i, j, linha, coluna;
      
    printf("Digite quantas linhas as matrizes devem ter:\n");
    scanf("%d",&linha);
    printf("Digite quantas colunas as matrizes devem ter:\n");
    scanf("%d",&coluna);
    
    int m1[linha][coluna];
    int m2[linha][coluna];
    int resultado[linha][coluna];
    
    for(i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            printf("Digite os valores para a linha: %d na coluna: %d da matriz: ",i+1,j+1);
            scanf("%d",&m1[i][j]);
        }
    }

    for(i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            printf("Digite os valores para a linha: %d na coluna: %d da matriz: ",i+1,j+1);
            scanf("%d",&m2[i][j]);
        }
    }

    printf("MATRIZ 1:\n");
    for(i=0;i<linha;i++) {
        for(j=0;j<coluna;j++) {
            printf("|%d|",m1[i][j]);
        }
        
        printf("\n"); 
    }
    
    printf("\n");   

    printf("MATRIZ 2:\n");
    for(i=0;i<linha;i++) {
        for(j=0;j<coluna;j++) {
            printf("|%d|",m2[i][j]);
        }
        
        printf("\n"); 
    }
    
    multi_matriz(linha,coluna,m1,m2);

    printf("\n");

    printf("O RESULTADO DA MULTIPLICAÇÃO:\n");
    for(i=0;i<coluna;i++) {
        for(j=0;j<linha;j++) {
            printf("|%d|",resultado[i][j]);
        }
        
        printf("\n"); 
    }


    return 0;


}
