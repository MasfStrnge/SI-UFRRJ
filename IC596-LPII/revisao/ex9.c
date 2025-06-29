// 9. Criar um vetor de 5 registros Aluno, ler os dados e calcular a média da turma.

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
    Aluno vetor[5];
    float soma = 0, media;

    for(int i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d: ",i+1);
        fgets(vetor[i].nome,sizeof(vetor[i].nome),stdin);
        
        vetor[i].nome[strcspn(vetor[i].nome,"\n")] = '\0';
        
        printf("Digite a matrícula do aluno %d: ",i+1);
        scanf("%d",&vetor[i].matricula);
        
        printf("Digite a nota do aluno %d: ",i+1);
        scanf("%f",&vetor[i].nota);

        while(getchar() != '\n');

        soma += vetor[i].nota;
    }

    media = soma/5;

    printf("A média da turma é de: %.2f\n",media);

    return 0;
}