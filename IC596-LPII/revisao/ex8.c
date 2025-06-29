// 8. Criar uma função que recebe um Aluno e retorna se está aprovado (nota >= 7).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int matricula;
    float nota;
}Aluno;

void situacao(Aluno aluno) {
    if(aluno.nota >= 7) {
        printf("O aluno: %s está APROVADO com nota: %.2f\n",aluno.nome, aluno.nota);
    }
    else {
        printf("O aluno %s está REPROVADO com nota: %.2f\n",aluno.nome,aluno.nota);
    }
}

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

    situacao(aluno);

    return 0;

}