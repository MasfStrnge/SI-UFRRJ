//15. Criar uma biblioteca aluno.h com funções: cadastrarAluno, imprimirAluno, verificarAprovado.
//Usar essas funções num programa com menu

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "registro.h"

void cadastrarAluno(Aluno aluno[],int tamanho) {
    printf("################## CADASTRAR ALUNOS ####################\n");
    for(int i = 0; i < tamanho; i++) {
        printf("Digite o nome do aluno %dº que deseja cadstrar: ", i+1);
        fgets(aluno[i].nome,sizeof(aluno[i].nome),stdin);

        aluno[i].nome[strcspn(aluno[i].nome,"\n")] = '\0';

        printf("Digite a nota do aluno %dº: ", i+1);
        scanf("%f",&aluno[i].nota);

        while(getchar() != '\n');
    }
}

void imprimirAluno(Aluno aluno[],int tamanho) {
    printf("################## ALUNOS REGISTRADOS ####################\n");
    for(int i = 0; i < tamanho; i++) {
        printf("ALUNO %dº: %s\tNOTA: %.2f\n",i+1, aluno[i].nome,aluno[i].nota);
    }
}

void verificarAprovado(Aluno aluno[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        if(aluno[i].nota >= 7) {
            printf("O aluno: %s está APROVADO com nota %.2f\n",aluno[i].nome,aluno[i].nota);
        }
        else {
            printf("O aluno %s está REPROVADO com nota %.2f\n",aluno[i].nome,aluno[i].nota);
        }
    }
}