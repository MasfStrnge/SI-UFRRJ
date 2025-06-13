// 9) Implemente uma função que receba dois vetores a e b, e crie um vetor resultado com a soma de
// cada elemento correspondente.

#include <stdio.h>
#include <stdlib.h>

void soma_vetor(int *a, int *b, int *resultado_soma, int n)
{
    for(int i = 0; i < n; i++) {
        resultado_soma[i] = a[i] + b[i];
    }
}

int main(void)
{
    int *a, *b, *resultado_soma;
    int n = 0;

    do {
    
        printf("Digite o tamanho do array A e B (Digite um valor negativo para finalizar o programa): ");
        scanf("%d",&n);

        a = calloc(n, (sizeof(int)));
        b = calloc(n, (sizeof(int)));
        resultado_soma = calloc(n, (sizeof(int)));

        for(int i = 0; i < n; i++) {
            printf("Digite o valor do %dº elemento de %d elementos do array A: ", (i+1), n);
            scanf("%d",&a[i]);
        }
    
        printf("\n");

        for(int i = 0; i < n; i++) {
            printf("Digite o valor do %dº elemento de %d elementos do array B: ", (i+1), n);
            scanf("%d",&b[i]);
        }

        printf("\n");

        soma_vetor(a,b,resultado_soma, n);

        printf("Os elementos do array A: ");
        for(int i = 0; i < n; i++) {
            printf(" %d",a[i]);
        }

        printf("\n");
        
        printf("Os elementos do array B: ");
        for(int i = 0; i < n; i++) {
            printf(" %d",b[i]);
        }

        printf("\n");

        printf("O resultado da soma entre cada elemento do vetor A e vetor B: ");
        for(int i = 0; i < n; i++) {
            printf(" %d",resultado_soma[i]);
        }

        printf("\n");
    
    } while (n >= 0);

    return 0;
}