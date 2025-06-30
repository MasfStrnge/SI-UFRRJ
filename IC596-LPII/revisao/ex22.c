// 22. Criar uma função que receba dois vetores dinâmicos de Aluno e retorne um novo vetor
// contendo os alunos das duas listas, sem repetir matrícula.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int matricula;
}Aluno;

Aluno* retornar(Aluno aluno1[], Aluno aluno2[], int tamanho) {
    Aluno *aluno3 = malloc((tamanho*2) * sizeof(Aluno));

    for(int i = 0; i < tamanho; i++) {
        strcpy(aluno3[i].nome,aluno1[i].nome);
        aluno3[i].matricula = aluno1[i].matricula;
    }

    for(int i = tamanho; i < tamanho * 2 ; i++) {
        strcpy(aluno3[i].nome,aluno2[i-tamanho].nome);
        aluno3[i].matricula = aluno2[i - tamanho].matricula;
    }

    return aluno3;
}

int main(void) 
{
    int tamanho = 2;
    Aluno *aluno1 = malloc(tamanho * sizeof(Aluno));
    if(aluno1 == NULL) {
        printf("ERRO: FALHA NA ALOCAÇÃO DINÂMICA\n");
        return 1;
    }

    for(int i = 0; i < tamanho; i++) {
        printf("Digite o nome do aluno %d da primeira lista: ",i+1);
        fgets(aluno1[i].nome,sizeof(aluno1[i].nome),stdin);

        aluno1[i].nome[strcspn(aluno1[i].nome,"\n")] = '\0';

        printf("Digite a matrícula do aluno %dº da primeira lista: ",i+1);
        scanf("%d",&aluno1[i].matricula);

        while(getchar() != '\n');
    }

    Aluno *aluno2 = malloc(tamanho * sizeof(Aluno));
    if(aluno2 == NULL) {
        printf("ERRO: FALHA NA ALOCAÇÃO DINÂMICA\n");
        return 1;
    }

    for(int i = 0; i < tamanho; i++) {
        printf("Digite o nome do aluno %dº da segunda lista: ",i+1);
        fgets(aluno2[i].nome,sizeof(aluno2[i].nome),stdin);

        aluno2[i].nome[strcspn(aluno2[i].nome,"\n")] = '\0';

        printf("Digite o a matrícula do aluno %dº da segunda lista: ",i+1);
        scanf("%d",&aluno2[i].matricula);

        while(getchar() != '\n');
    }
    
    Aluno *aluno = retornar(aluno1,aluno2,tamanho);

    for(int i = 0; i < tamanho * 2; i++) {
        printf("%d - %s\t%d\n",i+1,aluno[i].nome,aluno[i].matricula);
    }

    free(aluno1);
    free(aluno2);
    free(aluno);

    return 0;
}