// 33. Leia um arquivo de texto e exiba seu conteúdo na tela.

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    FILE *arquivo = fopen("arquivo.txt","r");

    if(arquivo == NULL) {
        perror("ERRO: FALHA NA ABERTURA DO ARQUIVO");
        return 1;
    }

    char buffer[200];

    fgets(buffer,sizeof(buffer),arquivo);

    printf("%s\n",buffer);

    fclose(arquivo);

    return 0;
}