// 40. Leia um arquivo binário com dados de produtos (structs).

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[30];
    float preco;
}Produto;

int main(void)
{
    FILE *arquivo = fopen("arquivo2.bin","wb");

    if(arquivo == NULL) {
        perror("ERRO: FALHA NA ABERTURA DO ARQUIVO");
        return 1;
    }

    Produto produtos[3] = {{"Sabonete",4.5},{"Detergente",2.00},{"Esponja",1.50}};

    fwrite(produtos,sizeof(Produto),3,arquivo);

    fclose(arquivo);

    arquivo = fopen("arquivo2.bin","rb");

    Produto lidos[3];

    if(arquivo == NULL) {
        perror("ERRO: FALHA NA ABERTURA DO ARQUIVO");
        return 1;
    }

    fread(lidos,sizeof(Produto),3,arquivo);

    fclose(arquivo);

    for(int i = 0; i < 3; i++) {
        printf("%d - Nome: %s |Preço: R$%.2f\n",i+1,lidos[i].nome,lidos[i].preco);
    }
    
    return 0;
}