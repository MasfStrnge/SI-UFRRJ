// 9. Crie um programa que leia 5 números e exiba o maior e o menor usando if e for.

#include <stdio.h>

int main(void)
{
    int maior = -2000, menor = 2000 , num = 0;

    for(int i = 0; i < 5; i++) {
        printf("Digite o %dº número: ",i+1);
        scanf("%d",&num);

        if(num > maior) {
            maior = num;
        }

        if(num < menor) {
            menor = num;
        }
    }

    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);

    return 0;
}