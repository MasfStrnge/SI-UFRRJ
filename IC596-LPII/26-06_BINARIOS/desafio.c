#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int numero = 42;
    FILE *arquivoInt = fopen("inteiro.bin", "wb");
    if (arquivoInt == NULL) {
        perror("Erro ao abrir inteiro.bin");
        return 1;
    }
    fwrite(&numero, sizeof(int), 1, arquivoInt);
    fclose(arquivoInt);

    char letra = 'Z';
    FILE *arquivoChar = fopen("caractere.bin", "wb");
    if (arquivoChar == NULL) {
        perror("Erro ao abrir caractere.bin");
        return 1;
    }
    fwrite(&letra, sizeof(char), 1, arquivoChar);
    fclose(arquivoChar);

    char texto[] = "Isso é uma string.";
    FILE *arquivoTexto = fopen("texto.bin", "wb");
    if (arquivoTexto == NULL) {
        perror("Erro ao abrir texto.bin");
        return 1;
    }
    fwrite(texto, sizeof(char), strlen(texto) + 1, arquivoTexto); // +1 para o '\0'
    fclose(arquivoTexto);

    printf("Todos os dados foram salvos em arquivos binários com sucesso!\n");

    return 0;
}
