// 18. Criar uma função que, recebendo esse vetor, imprima apenas os alunos com nota abaixo da
// média da turma.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    float nota;
}Aluno;

Aluno* retorna(int tamanho) {
    Aluno *aluno = malloc(tamanho * sizeof(Aluno));
    if (aluno == NULL) {
        printf("ERRO: FALHA NA ALOCAÇÃO DINÂMICA");
        exit(1);
    }

    for(int i = 0; i < tamanho; i++) {
        printf("Digite o nome do %dº aluno: ",i+1);
        fgets(aluno[i].nome,sizeof(aluno[i].nome),stdin);

        aluno[i].nome[strcspn(aluno[i].nome,"\n")] = '\0';

        printf("Digite a nota do aluno %dº: ",i+1);
        scanf("%f",&aluno[i].nota);

        while(getchar() != '\n');
    }

    return aluno;
}

int main(void) 
{
    int tamanho = 2;
    Aluno *aluno = retorna(tamanho);

    for(int i)




}