// 2) Dado três valores de forma dinâmica, ordene-os para que fiquem 
// em ordem crescente.

#include <stdlib.h>
#include <stdio.h>

int main(void);
int
main()

{
   float valores[3];

   for (int i=0; i<3; i++) {

    printf("Digite o %d valor:\n",i+1);
    scanf("%f",&valores[i]);

   }
   
   for (int i=0; i<3; i++) {
    
    printf("%f",valores[i]);

    }

    return 0;
}