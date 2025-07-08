//37. Copie o conteúdo de um arquivo para outro.

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    FILE *arquivo = fopen("arquivo3.txt","r");

    if(arquivo == NULL) {
        perror("ERRO: FALHA NA ABERTURA DO ARQUIVO");
        return 1;
    }

    FILE *destino = fopen("arquivo4.txt","w");

    if(arquivo == NULL) {
        perror("ERRO: FALHA NA ABERTURA DO ARQUIVO");
        return 1;
    }

    char buffer[200];

    while(fgets(buffer,sizeof(buffer),arquivo)) {
        fputs(buffer,destino);
    }

    fclose(arquivo);
    fclose(destino);

    return 0;
}
