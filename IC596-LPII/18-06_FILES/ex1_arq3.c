// 1. O que acontece se você abrir um arquivo para escrita (w) e tentar ler?
// RESPOSTA: Um arquivo txt é criado.

#include <stdio.h>

int main(void)
{
    FILE *ptr_arquivo;

    ptr_arquivo = fopen("to_write.txt","w");
    
    if(ptr_arquivo == NULL) {
        printf("ERRO: FALHA NA ABERTURA DO ARQUIVO.");
        return 1;
    }

    ptr_arquivo = fopen("to_write.txt","r");

    if(ptr_arquivo == NULL) {
        printf("ERRO: FALHA NA ABERTURA DO ARQUIVO.");
        return 1;
    }

    fclose(ptr_arquivo);

    return 0;
}