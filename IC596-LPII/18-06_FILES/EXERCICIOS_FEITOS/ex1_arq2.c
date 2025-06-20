// 1. O que acontece se você abrir um arquivo com 'w' só que esse arquivo já existe e tem seu nome, 
// mas você vem e escreve Rural no arquivo?

// RESPOSTA: Ele subtitui o conteúdo do arquivo.

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

    fclose(ponteiro_arquivo);

    return 0;
}