// Exercício: depois de entender o que está neste exemplo, faça o mesmo só que alocando memória linha por linha.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_BUFFER 200

int main() {
    FILE *arquivo = fopen("nirvana.txt", "r");

    if (arquivo == NULL) {
        perror("ERRO: FALHA NA ABERTURA DO ARQUIVO");
        return 1;
    }

    char buffer[TAM_BUFFER];
    char **linhas = NULL;
    int quantidade = 0;

    while (fgets(buffer, TAM_BUFFER, arquivo) != NULL) {
        // Remove '\n' se houver (opcional)
        buffer[strcspn(buffer, "\n")] = '\0';

        // Realoca o vetor de ponteiros para guardar mais uma linha
        linhas = realloc(linhas, (quantidade + 1) * sizeof(char*));
        if (linhas == NULL) {
            printf("Erro ao realocar memória.\n");
            fclose(arquivo);
            return 1;
        }

        // Aloca espaço exato para a linha
        linhas[quantidade] = malloc(strlen(buffer) + 1);
        if (linhas[quantidade] == NULL) {
            perror("ERRO: FALHA AO ALOCAR LINHA");
            fclose(arquivo);
            return 1;
        }

        strcpy(linhas[quantidade], buffer);
        quantidade++;
    }

    printf("Conteúdo do arquivo, linha por linha:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Linha %d: %s\n", i + 1, linhas[i]);
        free(linhas[i]);  // Libera cada linha individualmente
    }

    free(linhas);  // Libera o vetor de ponteiros
    fclose(arquivo);

    return 0;
}
