// 28. Leia nomes com malloc e guarde em um array de ponteiros.

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int quantidade = 3;
    char **nomes = malloc(3 * sizeof(char*));
    
    if(nomes == NULL) {
        perror("ERRO: FALHA NA ALOCAÇÃO DINÂMICA");
        return 1;
    }

    for(int i = 0; i < quantidade; i++) {
        int buffer = 200;
        nomes[i] = malloc(buffer * sizeof(char));

        if(nomes[i] == NULL) {
            perror("ERRO: FALHA NA ALOCAÇÃO DINÂMICA");
            return 1;
        }
    }

    for(int i = 0; i < quantidade; i++) {
        printf("Digite o %dº nome: ",i+1);
        scanf("%s",nomes[i]);
    }

    for(int i = 0; i < quantidade; i++) {
        printf("%d - %s\n ",i+1,nomes[i]);
    }

    for(int i = 0; i < quantidade; i++) {
        free(nomes[i]); 
    }

    free(nomes);

    return 0;
}