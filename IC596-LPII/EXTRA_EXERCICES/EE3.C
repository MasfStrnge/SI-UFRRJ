/*3)Fazer um programa que solicita um número decimal e imprime o
correspondente em hexa e octal.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int dec;

   printf("Digite um número em decimal:\n");
   scanf("%d",&dec);

   printf("HEXADECIMAL: %X\n",dec);
   printf("OCTAL: 0%o\n",dec);

   printf("\a");

   return 0;
   
}