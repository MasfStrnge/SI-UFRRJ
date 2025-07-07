// 10. Escreva uma função que calcule o fatorial de um número usando for.
#include <stdio.h>

int fatorial(int num) {
    int resultado = 1;
    for(int i = 0; i < num; i++) {
        resultado *= (num - i); 
    }

    return resultado;
}

int main(void)
{
    int num = 4;

    printf("O fatorial do número %d é: %d\n",num,fatorial(num));

    return 0;
}
