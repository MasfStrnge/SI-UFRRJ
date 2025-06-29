// 11. Criar um programa que grave em um arquivo .txt o nome e nota de n alunos.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_BUFFER 2000

typedef struct {
    char nome[50];
    float nota;
}Aluno;

void gravarAluno(Aluno vetor[],int tamanho) {
    FILE *arquivo = fopen("alunos.txt", "w");

    if(arquivo == NULL) {
        printf("ERRO: FALHA NA ABERTURA DO ARQUIVO");
        return;
    }

    char buffer[TAM_BUFFER];

    for(int i = 0; i < tamanho; i++) {
        fprintf(arquivo,"%s\t%.2f\n",vetor[i].nome,vetor[i].nota);
    }

    fclose(arquivo);

}

int main(void)
{
    int tamanho;

    printf("Quantos alunos deseja gravar?: ");
    scanf("%d",&tamanho);
    while(getchar() != '\n');

    Aluno *vetor = malloc(tamanho * sizeof(Aluno));
    if(vetor == NULL) {
        printf("ERRO: FALHA NA ALOCAÇÃO DE MEMÓRIA");
        return 1;
    }

    for(int i = 0; i < tamanho; i++) {
        printf("Digite o nome do %dº: ",i+1);
        fgets(vetor[i].nome,sizeof(vetor[i].nome),stdin);
        
        vetor[i].nome[strcspn(vetor[i].nome,"\n")] = '\0';

        printf("Digite a nota do aluno %dº: ",i+1);
        scanf("%f",&vetor[i].nota);

        while(getchar() != '\n');
    }

    gravarAluno(vetor,tamanho);

    free(vetor);

    return 0;
}

