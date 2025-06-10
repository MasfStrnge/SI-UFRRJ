// Declare uma variável inteira, crie um ponteiro para essa variável
// e imprima seu endereço e seu valor usando o ponteiro.
#include <stdio.h>

int main(void)
{
    int variavel = 10, *ponteiro_variavel;

    ponteiro_variavel = &variavel;

    printf("O endereço da variável: %p\n",ponteiro_variavel);
    printf("O valor da variável: %d\n", *ponteiro_variavel);

    return 0;

}
