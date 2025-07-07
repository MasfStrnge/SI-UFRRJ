// 2. Crie uma função que receba dois números e retorne o maior.

#include <stdio.h>

int maior(int num1, int num2) {
    if(num1 > num2) {
        return num1;
    }
    else if (num1 == num2) {
        printf("OS NÚMEROS SÃO IGUAIS\n");
        return 1;
    }
    else {
        return num2;
    }
}

int main(void) 
{
    int num1 = 10, num2 = 10;

    printf("RESULTADO: %d\n",maior(num1,num2));

    return 0;
}
