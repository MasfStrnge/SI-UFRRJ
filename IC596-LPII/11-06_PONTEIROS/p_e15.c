// 15. Crie um array fixo de inteiros e implemente funções meu_malloc e meu_free simulando um
// sistema de alocação de memória simples.

#include <stdio.h>
#include <stdlib.h>

void meu_malloc(int *ponteiro_array_fixo)
{
    ponteiro_array_fixo = malloc(5 * (sizeof(int)));
}

void meu_free(int *ponteiro_array_fixo)
{
    free(ponteiro_array_fixo);
}

int main(void)
{
    int *array_fixo[5];
    int *ponteiro_array_fixo = array_fixo;

    ponteiro_array_fixo = calloc(5,(sizeof(int)));

    for(int i = 0; i < 5; i++) {
        array_fixo[i] = 3;
    }

    for(int i = 0; i < 5; i++) { 
        printf("%d ", array_fixo[i]);
    }

    free(ponteiro_array_fixo);

    for(int i = 0; i < 5; i++) { 
        printf("%d ", array_fixo[i]);
    }

    printf("\n")

    return 0;
    
}