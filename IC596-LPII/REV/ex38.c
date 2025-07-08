// 38. Adicione novos dados ao final de um arquivo existente.

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    FILE *arquivo = fopen("arquivo4.txt","a");

    if(arquivo == NULL) {
        perror("ERRO: FALHA NA ABERTURA DO ARQUIVO");
        return 1;
    }

    fprintf(arquivo,"novo dado");

    fclose(arquivo);

    return 0;
}