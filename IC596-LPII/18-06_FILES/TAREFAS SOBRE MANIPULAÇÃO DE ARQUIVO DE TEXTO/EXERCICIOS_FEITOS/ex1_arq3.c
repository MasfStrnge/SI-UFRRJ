// 1. O que acontece se você abrir um arquivo para escrita (w) e tentar ler?
// RESPOSTA: O arquivo é criado se não existir (ou sobrescrito se existir).
// Tentar ler de um arquivo aberto com "w" causa erro, pois o modo "w" permite apenas escrita.


#include <stdio.h>

int main(void)
{
    FILE *ptr_arquivo;

    ptr_arquivo = fopen("to_write.txt","w");
    
    if(ptr_arquivo == NULL) {
        printf("ERRO: FALHA NA ABERTURA DO ARQUIVO.");
        return 1;
    }

    char buffer[100];
    fgets(buffer,100,ptr_arquivo);
    printf("%s\n",buffer);

    fclose(ptr_arquivo);

    return 0;
}