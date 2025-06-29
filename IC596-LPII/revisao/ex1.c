#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tam = 1;
    int *ponteiro = malloc(tam * sizeof(int));

    if (ponteiro == NULL) {
        printf("ERRO: FALHA NA ALOCAÇÃO");
        return 1;
    }

    *ponteiro = 3;

    printf("%d\n",*ponteiro);

    free(ponteiro);

    return 0;
}