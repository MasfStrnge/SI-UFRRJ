// 2) Dado três valores de forma dinâmica, ordene-os para que fiquem 
// em ordem crescente.
#include <stdio.h>
#include <stdlib.h>

int main() {
    
   int valores[3], i, j, temp = 0;

   printf("Digite três valores inteiros:\n ");
    
   for (i=0;i<3;i++) {

      scanf("%d",&valores[i]);
    
   }
      
   for (i=0;i<2;i++) 
     
      for (j=0;j<2-i;j++) {

         if (valores[j]>valores[j+1]) {

            temp = valores[j];
            valores[j] = valores[j+1];
            valores[j+1] = temp;
         }

     }
   
     printf("Em ordem crescente:\n");
      
      for (i = 0; i < 3; i++) {
         
         printf("%d\n", valores[i]);

      }
   
   return 0;
}
