// 42. Altere o segundo registro de um arquivo binário usando fseek e fwrite.

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[30];
    float preco;
}Produto;

int main(void)
{
    FILE *arquivo = fopen("arquivo2.bin","r+b");

    if(arquivo == NULL) {
        perror("ERRO: FALHA NA ABERTURA DO ARQUIVO");
        return 1;
    }

    Produto p2 = {"Pano",0.50};

    fseek(arquivo, sizeof(Produto) * 1, SEEK_SET);

    fwrite(&p2,sizeof(Produto),1,arquivo);

    fclose(arquivo);

    return 0;
}