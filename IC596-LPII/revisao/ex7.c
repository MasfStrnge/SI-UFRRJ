// 7. Definir um registro Aluno com nome, matrícula, nota. Ler os dados de um aluno e imprimir.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int matricula;
    float nota;
}Aluno;

int main(void) 
{
    Aluno aluno;

    printf("Digite o seu nome: ");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);
    aluno.nome[strcspn(aluno.nome,"\n")] = '\0';

    printf("Digite a matricula: ");
    scanf("%d",&aluno.matricula);

    printf("Digite a nota: ");
    scanf("%f",&aluno.nota);

    printf("NOME DO ALUNO: %s\n",aluno.nome);
    printf("MATRICULA: %7d\n",aluno.matricula);
    printf("NOTA: %.2f\n",aluno.nota);

    return 0;

}