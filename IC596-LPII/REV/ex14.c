// 14. Leia 10 números e diga se um número digitado pelo usuário está no array.

#include <stdio.h>

int main(void)
{
    int array[10] = {12,56,89,14,87,8,3,2,23,55};
    int guess;

    printf("Digite o número: ");
    scanf("%d",&guess);

    for(int i = 0; i < 10; i++) {
        if(guess == array[i]) {
            printf("O número %d está na %dº posição do array\n",guess,i+1);
        }
    }

    return 0;
}
