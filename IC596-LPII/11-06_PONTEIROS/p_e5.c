// 5) Faça uma função que recebe um ponteiro para um valor inteiro e dobra o valor da variável
// original.

#include <stdio.h>

void dobra_valor(int *ponteiro_variavel)
{
    *ponteiro_variavel *= 2;
}

int main(void)
{
    int variavel = 500;
    
    printf("O valor da variavél antes da chamada da função: %d\n", variavel);

    dobra_valor(&variavel);

    printf("O valor da variável após a chamada da função: %d\n",variavel);

    return 0;

}