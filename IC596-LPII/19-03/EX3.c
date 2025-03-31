// 3) Você consegue repetir a questão anterior para que seu código
// ordene qualquer quantidade de valores passado?

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n, i, j, temp, contador = 0;
    
    printf("Digite a quantidade de valores que deseja ordenar:\n");
    scanf("%d",&n);

    int valores[n];

    for (i=0;i<n;i++) {

        printf("Digite o valor: %d\n",i+1);  
        scanf("%d",&valores[i]);
    
         }

    printf("Na ordem dada:\n");
    
    for (i=0; i<n;i++) {

        printf("%d,",valores[i]);
    }

    for (i=0; i<(n-1); i++) 
       
        for (j=0; j<(n-1)-i; j++) {
         
            if (valores[j]>valores[j+1]) {

                temp = valores[j];
                valores[j] = valores[j+1];
                valores[j+1] = temp;
                contador = contador + 1;

            }

        }

    printf("\nDepois do Bubble Sort:\n");
      
        for (i = 0; i < n; i++) {
               
            printf("%d,", valores[i]);
      
        }

    printf("\n");
    printf("Quantidades de trocas: %d", contador);
       
    return 0;

}