// 21. Criar uma struct Produto com nome, preço, quantidade. Alocar dinamicamente um vetor de n
// produtos e calcular o valor total em estoque.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[20];
    float preco;
    int quantidade;
}Produto;

int main(void)
{
    int tamanho = 0;
    float soma = 0;
    
    printf("Quantos produtos deseja estocar?: ");
    scanf("%d",&tamanho);
    while(getchar() != '\n');

    Produto *produto = malloc(tamanho * sizeof(Produto));
    if (produto == NULL) {
        printf("ERRO: FALHA NA ALOCAÇÃO DINÂMICA");
        return 1;
    } 

    for(int i = 0; i < tamanho; i++) {
        printf("Digite o nome do produto %dº: ",i+1);
        fgets(produto[i].nome,sizeof(produto[i].nome),stdin);

        produto[i].nome[strcspn(produto[i].nome,"\n")] = '\0';

        printf("Digite o preço do produto %dº: ",i+1);
        scanf("%f",&produto[i].preco);

        printf("Digite a quantidade de produtos %dº: ",i+1);
        scanf("%d",&produto[i].quantidade);

        while(getchar() != '\n');

        soma += ((float)produto[i].preco * produto[i].quantidade);
    }

    printf("O valor total em estoque é de %.2f",soma);

    return 0;
}