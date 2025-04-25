#include <stdio.h>
#include <stdlib.h>

int main() {

  // conversão de tipos

  int x = 10;
  int y = 2;
  int r = x/y;

  printf("CONVERSÃO DE TIPOS:\n");
  printf("%d\n",r);
  printf("%f\n",r);

  // conversão implícita.

  int i = 10.11;
  float w = 9;
  float p = 5/2;

  printf("CONVERSÃO IMPLÍCITA:\n");
  printf("%i\n",i);
  printf("%f\n",w);
  printf("%f\n",p);

  // conversão explicíta.

  float t = 5/2;
  float e = (float)5/2;
  float f = 5/2.0;

  printf("CONVERSÃO EXPLÍCITA:\n");
  

  return 0;

}