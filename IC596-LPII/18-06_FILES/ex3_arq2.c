// 3. O que pode acontecer "de ruim" se você não fechar o arquivo (fclose)?
// RESPOSTA: vazamento de memória, comportamento indefinido e dados não gravados corretamente.

#include <stdio.h>

int main(void)
{
    FILE *ponteiro_arquivo;
    
    ponteiro_arquivo = fopen("para_ler.txt","w");
    if(ponteiro_arquivo == NULL) {
        printf("ERRO: FALHA NA ABERTURA DO ARQUIVO");
        return 1;
    }

    fprintf(ponteiro_arquivo,"Rural");
    fclose(ponteiro_arquivo);

    ponteiro_arquivo = fopen("para_ler.txt","r");
    if(ponteiro_arquivo == NULL) {
        printf("ERRO: FALHA NA ABERTURA DO ARQUIVO");
        return 1;
    }
    
    char texto[100];
    
    fgets(texto,100,ponteiro_arquivo);
    printf("%s\n", texto);

    return 0;
}