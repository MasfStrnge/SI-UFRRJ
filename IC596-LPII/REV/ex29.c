// 29. Crie um cadastro de produtos com malloc e structs.

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[30];
    float preco;
}Produto;


int main(void) 
{
    int tamanho;
    
    printf("Digite a quantidade de produtos que deseja cadastrar: ");
    scanf("%d",&tamanho);
    
    Produto *produtos = malloc(tamanho * sizeof(Produto));
    
    if(produtos == NULL) {
        perror("ERRO: FALHA NA ALOCAÇÃO DINÂMICA");
        return 1;
    }
    
    for(int i = 0; i < tamanho; i++) {
        printf("Digite o nome do %dº produto: ",i+1);
        scanf("%s",produtos[i].nome);

        printf("Digite o preço do %dº produto: ",i+1);
        scanf("%f",&produtos[i].preco);
    }

    printf("############# PRODUTOS CADASTRADOS #############\n");
    for(int i = 0; i < tamanho; i++) {
        printf("%d | %s |R$%.2f\n",i+1,produtos[i].nome,produtos[i].preco);
    }

    free(produtos);

    return 0;
}
