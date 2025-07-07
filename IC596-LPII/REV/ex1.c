// 1. Escreva um programa que leia um número e diga se ele é par ou ímpar usando if.

#include <stdio.h>

int main(void)
{
    int num;
    
    printf("Digite um número inteiro: ");
    scanf("%d",&num);

    if (num % 2 == 0) {
        printf("O número %d é PAR\n",num);
    }
    else {
        printf("O número é IMPAR");
    }

    return 0;
}