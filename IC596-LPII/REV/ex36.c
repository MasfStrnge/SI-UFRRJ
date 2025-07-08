// 36. Leia nomes de um arquivo e conte quantas linhas existem.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int contador = 0;
    FILE *arquivo = fopen("arquivo3.txt","r");

    if(arquivo == NULL) {
        perror("ERRO: FALHA NA ABERTURA DO ARQUIVO");
        return 1;
    }

    char buffer[200];

    while(fgets(buffer,sizeof(buffer),arquivo)) {
        contador++;
    }

    fclose(arquivo);

    printf("Quantidade de linhas: %d\n",contador);

    return 0;
}