//32. Crie um programa que escreve "Olá Mundo" em um arquivo .txt.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
    FILE *arquivo = fopen("arquivo.txt","w");

    if(arquivo == NULL) {
        perror("ERRO: FALHA NA ABERTURA DO ARQUIVO");
        return 1;
    }

    fprintf(arquivo,"Olá Mundo");

    fclose(arquivo);

    return 0;
}
