/*2. Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9*/

#include <stdio.h>
#include <stdlib.h>

int main()

{
    int i,j,x = 0;
  
    for(j=0;j<9;j++) {

        printf("\nTABUADA DE %d\n\n", j+1);
       
       for (i=0;i<10;i++) {
        
        x = ((j+1)*i);
        printf("%d x %d = %d\n",j+1,i,x);

        }
    }
  
    
    return 0;

}