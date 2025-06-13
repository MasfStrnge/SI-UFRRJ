// 13. Observe e teste o código a seguir. Ele Declara um ponteiro para uma função que soma dois
// inteiros. Depois, ele usa o ponteiro para chamar a função.

#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int (*ptr)(int,int) = soma;
    printf("Resultado: %d\n",ptr(4,5));
    return 0;
}