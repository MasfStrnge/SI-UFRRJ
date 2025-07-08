// 34.Leia 10 números de um arquivo e calcule a média.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *arquivo = fopen("arquivo2.txt","w");

    if(arquivo == NULL) {
        perror("ERRO: FALHA NA ABERTURA DO ARQUIVO");
        return 1;
    }

    for(int i = 0; i < 10; i++) {
        fprintf(arquivo,"%d ",i+1);
    }

    fclose(arquivo);

    arquivo = fopen("arquivo2.txt","r");

    if(arquivo == NULL) {
        perror("ERRO: FALHA NA ABERTURA DO ARQUIVO");
        return 1;
    }

    char buffer[500];

    fgets(buffer,sizeof(buffer),arquivo);

    printf("%s",buffer);

    fclose(arquivo);

    return 0;
}