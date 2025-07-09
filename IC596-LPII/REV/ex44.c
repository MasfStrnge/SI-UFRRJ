// 44. Leia um arquivo binário de Pessoa, alocado dinamicamente, e imprima.

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int idade;
}Pessoa;

int main(void)
{
    int tamanho = 2;
    Pessoa *pessoas = malloc(tamanho * sizeof(Pessoa));

    if(pessoas == NULL) {
        perror("ERRO: FALHA NA ALOCAÇÃO DINÂMICA");
        return 1;
    }

    for(int i = 0; i < tamanho; i++) {
        printf("Digite o nome da %dº pessoa: ",i+1);
        scanf("%s",pessoas[i].nome);

        printf("Digite a idade da %dº pessoa: ",i+1);
        scanf("%d",&pessoas[i].idade);
        getchar();
    }

    FILE *arquivo = fopen("pessoas.bin","r+b");

    if(arquivo == NULL) {
        perror("ERRO: FALHA NA ABERTURA DO ARQUIVO");
        return 1;
    }

    fwrite(pessoas,sizeof(Pessoa),tamanho,arquivo);

    Pessoa pessoas_lidas[tamanho];

    fseek(arquivo, 0, SEEK_SET);
    
    fread(pessoas_lidas,sizeof(Pessoa),tamanho,arquivo);

    fclose(arquivo);

    for(int i = 0; i < tamanho; i++) {
        printf("%d - Nome: %s\tIdade: %d\n",i+1,pessoas_lidas[i].nome,pessoas_lidas[i].idade);
    }

    free(pessoas);

    return 0;
}