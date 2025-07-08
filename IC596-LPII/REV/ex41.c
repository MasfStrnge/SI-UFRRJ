// 41. Acesse diretamente o terceiro registro de um arquivo binário usando fseek.

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[30];
    float preco;
}Produto;

int main(void) 
{
    FILE *arquivo = fopen("arquivo2.bin","rb");

    if(arquivo == NULL) {
        perror("ERRO: FALHA NA ABERTURA DO ARQUIVO");
        return 1;
    }

    Produto p3;
    
    fseek(arquivo,sizeof(Produto) * 2 ,SEEK_SET);

    fread(&p3,sizeof(Produto),1,arquivo);

    fclose(arquivo);

    printf("%d - Nome: %s\tPreço: R$%.2f\n",1,p3.nome,p3.preco);

    return 0;
}