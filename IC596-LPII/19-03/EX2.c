// 2) Dado três valores de forma dinâmica, ordene-os para que fiquem 
// em ordem crescente.
#include <stdio.h>
#include <stdlib.h>

int main() {
    
   int arr[3], temp, i, j;

   for (int i=0;i<3;i++) {

      printf("INsira um número inteiro:");
      scanf("%d",&arr[i]);

   }

   for (j=0;j<3;j++) 

      for (i=0; i<3;i++) {

        if (arr[i]>arr[i+1]) {

            temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;

        }

      }


   }

    

    return 0;
}