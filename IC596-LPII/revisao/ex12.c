// 12. Ler esse arquivo .txt e imprimir apenas os alunos com nota >= 7.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *arquivo = fopen("alunos.txt","r");
    
    if(arquivo == NULL) {
        printf("ERRO: FALHA NA LEITURA DO ARQUIVO");
        return 1;
    }

    char nome[50];
    float nota;

    char linha[200];

    while(fgets(linha,200,arquivo)) {
        if(sscanf(linha,"%[^\t]\t%f\n",nome,&nota) == 2) {
            if(nota >= 7) {
                printf("%s\t%.2f\n",nome,nota);
            }
        }
    }

    fclose(arquivo);

    return 0;
}