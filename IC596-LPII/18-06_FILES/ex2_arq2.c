// 2. O que acontece se você acessar um arquivo para adicionar algo (append, 'a') e esse arquivo não existir?
// RESPOSTA: Ele cria um arquivo vazio com o nome dele.

#include <stdio.h>

int main(void) 
{
    FILE *ponteiro_arquivo;

    ponteiro_arquivo = fopen("não_existe.txt", "a");
    
    if(ponteiro_arquivo == NULL) {
        printf("ERRO: FALHA NA ABERTURA DO ARQUIVO.");
        return 1;
    }

    fclose(ponteiro_arquivo);

    return 0;

}