#include <stdio.h>
#include "calculador_fatorial.h"

int main(void) 
{
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d",&numero);

    printf("O resultado do fatorial com o laço: %d\n",fatorial_laco(numero));
    printf("O resultado do fatorial comuma função recursiva: %d\n",fatorial_recursivo(numero));

    return 0;
}