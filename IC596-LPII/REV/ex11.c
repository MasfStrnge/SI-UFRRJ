// 11. Leia 10 números inteiros em um array e imprima a média.

#include <stdio.h>

int main(void)
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int soma = 0;
    float media;

    for(int i = 0; i < 10; i++) {
        soma += array[i];

    }

    media = (float)soma/10;

    printf("A média é: %.2f\n",media);

    return 0;
}
