// 2. O que acontece se você abrir um arquivo para adicionar (a) e tentar ler?
// RESPOSTA: O arquivo é criado se não existir, e a escrita é feita sempre no final.
// A leitura não é permitida no modo "a". Tentar ler retorna erro.

#include <stdio.h>

int main(void)
{
    FILE *ptr_arquivo = fopen("to_append.txt","a");
    
    if(ptr_arquivo == NULL) {
        printf("ERRO: FALHA NA ABERTURA DO ARQUIVO");
        return 1;
    }

    char buffer[100];
    fgets(buffer,100,ptr_arquivo);
    printf("%s\n",buffer);

    fclose(ptr_arquivo);

    return 0;
}