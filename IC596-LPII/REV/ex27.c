// 27. Crie uma função que recebe um vetor alocado e retorna o maior valor.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tamanho = 5;
    int *vetor = malloc(tamanho * sizeof(int));

    if(vetor == NULL) {
        perror("ERRO: FALHA NA ALOCAÇÃO DINÂMICA");
        return 1;
    }

    for(int i = 0; i < tamanho; i++) {
        
    }


    

}