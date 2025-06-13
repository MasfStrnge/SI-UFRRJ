// 10) Escreva uma função que troque os conteúdos de duas strings de mesmo tamanho usando
// ponteiros.

#include <stdio.h>
#include <string.h>

void troca_conteudo(char *ponteiro_1, char *ponteiro_2)
{
    char aux[30];

    strcpy(aux,ponteiro_1);
    strcpy(ponteiro_1,ponteiro_2);
    strcpy(ponteiro_2,aux);
}

int main(void) 
{
    char string_1[30] = "Manuela dos Santos Ferreira";
    char string_2[30] = "Natalia Terra Maia";

    printf("O conteúdo da 1º string ANTES da troca: %s\n", string_1);
    printf("O conteúdo da 2º string ANTES da troca: %s\n", string_2);
    
    printf("\n");

    troca_conteudo(string_1,string_2);

    printf("O conteúdo da 1º string DEPOIS da troca: %s\n", string_1);
    printf("O conteúdo da 2º string DEPOIS da troca: %s\n", string_2);

    return 0;
}