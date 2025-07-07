// 2. Crie uma função que receba dois números e retorne o maior.

#include <stdio.h>

int maior(int num1, int num2) {
    if(num1 > num2) {
        return num1;
    }
    else if (num1 == num2) {
        printf("OS NÚMEROS SÃO IGUAIS");
        
    }
    else {
        return num2;
    }
}

int main(void) 
{
    int num1 = 2, num2 = 3;

    printf("RESULTADO:");
    printf(maior(num1,num2));

    return 0;
}
