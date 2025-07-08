// 39. Grave números inteiros em um arquivo binário.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *arquivo = fopen("arquivo.bin","wb");

    int array[10] = {1,2,3,4,5,6,7,8,9,10};

    if(arquivo == NULL) {
        perror("ERRO: FALHA NA ABERTURA DO ARQUIVO");
        return 1;
    }

    fwrite(array,sizeof(int),10,arquivo);

    fclose(arquivo);

    return 0;
}

