// 10. Criar uma função que recebe esse vetor e retorna o nome do aluno com maior nota.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int matricula;
    float nota;
}Aluno;

void MaiorNota(Aluno vetor[5]) {
    int maiornota = vetor[0].nota;

    for(int i = 0; i < 5; i++) {
        if(vetor[i].nota > vetor[maiornota].nota) {
            maiornota = i;

        }
    }

    printf("O nome do aluno com maior nota é: %s\n",vetor[maiornota].nome);
}

int main(void)
{
    Aluno vetor[5];

    for(int i = 0; i < 5; i++) {
        printf("ALUNO %d | NOME: ",i+1);
        fgets(vetor[i].nome,sizeof(vetor[i].nome),stdin);
        vetor[i].nome[strcspn(vetor[i].nome,"\n")] = '\0';

        printf("ALUNO %d | MATRÍCULA: ",i+1);
        scanf("%d",&vetor[i].matricula);

        printf("ALUNO %d | NOTA: ",i+1);
        scanf("%f",&vetor[i].nota);

        while(getchar() != '\n');

    }

    MaiorNota(vetor);

    return 0;

}