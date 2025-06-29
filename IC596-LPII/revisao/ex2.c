//Implemente uma função swap que troque dois inteiros usando ponteiros.

#include <stdio.h>
#include <stdlib.h>

void swap(int *p1, int *p2) {
    int temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(void)
{
    int numero1 = 10;
    int numero2 = 30;

    printf("VALOR 1 ANTES DA TROCA: %d\n", numero1);
    printf("VALOR 2 ANTES DA TROCA: %d\n", numero2);

    swap(&numero1,&numero2);

    printf("VALOR 1 DEPOIS DA TROCA: %d\n", numero1);
    printf("VALOR 2 DEPOIS DA TROCA: %d\n", numero2);

    return 0;
}