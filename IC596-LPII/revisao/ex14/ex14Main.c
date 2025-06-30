#include <stdio.h>
#include "ex14.c"

int main(void) {
    int valor1, valor2;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d",&valor1);

    printf("Digite o segundo valor: ");
    scanf("%d",&valor2);

    printf("Valor da soma: %d\n",soma(valor1,valor2));
    printf("Valor da media: %.2f\n",media(valor1,valor2));

    return 0;
}