// 5. Criar uma função que receba por referência um número e o eleve ao quadrado.

#include <stdio.h>
#include <stdlib.h>

void quadrado(int *numero) {

    *numero *= (*numero);
}

int main(void) 
{
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d",&numero);

    quadrado(&numero);

    printf("O número ao quadrado: %d\n", numero);

    return 0;
}