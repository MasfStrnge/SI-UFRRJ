// 22. Questão Bônus com pesquisa: Crie um programa que aloca várias estruturas dinamicamente. Ao
// final, use valgrind (ou ferramenta similar) para verificar se houve vazamentos.Corrija o código para
// garantir que toda memória seja liberada.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *nome;
    int idade;

}Pessoa;

int main(void) 
{
    int qtd_pessoas = 3;
    
    Pessoa *pessoas = malloc(qtd_pessoas * sizeof(Pessoa));
    if(pessoas == NULL) {
        printf("ERRO: FALHA NA ALOCAÇÃO DINÂMICA");
        return 1;
    }

    char *nomes[] = {"Manuela","Natalia","Maria"};
    int idades[] = {20, 45, 22};

    for(int i = 0; i < qtd_pessoas; i++) {
        pessoas[i].nome = malloc(strlen(nomes[i]) + 1);
        if(pessoas[i].nome == NULL) {
            printf("ERRO: FALHA ALOCAÇÃO DINÂMICA");
            return 1;
        }

        strcpy(pessoas[i].nome, nomes[i]);
        pessoas[i].idade = idades[i];
    }

    for(int i = 0; i < qtd_pessoas; i++) {
        printf("Pessoa %d com nome: %s. e idade: %d\n",i+1,pessoas[i].nome, pessoas[i].idade);
    }

    for(int i = 0; i < qtd_pessoas; i++) {
        free(pessoas[i].nome);
    }

    free(pessoas);

    return 0;
}