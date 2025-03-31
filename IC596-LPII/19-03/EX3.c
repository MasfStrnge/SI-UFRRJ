// 3) Você consegue repetir a questão anterior para que seu código
// ordene qualquer quantidade de valores passado?

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n, i, j, temp;
    
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
       
        for (j=0; j<(n-1)-j; j++) {
         
            if (valores[j]>valores[j+1]) {

                temp = valores[j];
                valores[j] = valores[j+1];
                valores[j+1] = temp;

            }

        }

    printf("Em ordem crescente:\n");
      
        for (i = 0; i < n; i++) {
               
            printf("%d,", valores[i]);
      
        }
       
    }

    printf("\n");
       
    return 0;

}