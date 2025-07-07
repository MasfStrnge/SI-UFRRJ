// 7. Escreva um programa que leia um número de 1 a 7 e use switch para mostrar o dia da semana.

#include <stdio.h>

int main(void)
{
    int num;

    printf("Digite um número de 1 a 7: ");
    scanf("%d",&num);

    switch(num) {
        case 1: 
            printf("SEGUNDA\n"); 
            break;
        case 2: 
            printf("TERÇA\n");
            break;
        case 3: 
            printf("QUARTA\n");
            break;
        case 4: 
            printf("QUINTA\n");
            break;
        case 5: 
            printf("SEXTA\n");
            break;
        case 6: 
            printf("SÁBADO\n");
            break;
        case 7: 
            printf("DOMINGO\n");
            break;
    }

    return 0;
}