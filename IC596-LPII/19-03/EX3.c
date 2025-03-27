// 3) Você consegue repetir a questão anterior para que seu código
// ordene qualquer quantidade de valores passado?
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n, i, j, temp;
    int valores[n];
    
    printf("Digite a quantidade de valores que deseja ordenar:");
    scanf("%d",&n);

    for (i=0;i<n; i++) {

        printf("Digite o valor: %d\n",i);  
        scanf("%d",&valores[i]);
    
         }
       
    return 0;

}