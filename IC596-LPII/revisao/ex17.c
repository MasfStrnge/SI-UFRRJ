// 17. Criar uma função que aloque um vetor dinâmico de structs Aluno, leia os dados e retorne o
// ponteiro para esse vetor.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    float nota;
}Aluno;

Aluno* retorna(int tamanho) {
    Aluno *aluno = malloc(tamanho * sizeof(Aluno));
    if(aluno == NULL) {
        printf("ERRO: FALHA NA ALOCAÇÃO DINÂMICA");
        exit(1);
    }

    for(int i = 0; i < tamanho; i++) {
        printf("Digite o nome do aluno %dº: ",i+1);
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

    printf("########## ALUNOS REGISTRADOS ##########\n");
    for(int i = 0; i < tamanho; i++) {
        printf("%dº -%s\t%.2f\n",i+1,aluno[i].nome,aluno[i].nota);
    }

    free(aluno);

    return 0;
}