// 43. Aloque dinamicamente uma lista de Aluno e grave em um arquivo binário.

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int matr;
}Aluno;

int main(void)
{
    int tamanho = 2;
    Aluno *alunos = malloc(tamanho * sizeof(Aluno));

    if(alunos == NULL) {
        perror("ERRO: FALHA NA ALOCAÇÃO DINÂMICA");
        return 1;
    }

    for(int i = 0; i < tamanho; i++) {
        printf("Digite o nome do %dº aluno: ",i+1);
        scanf("%s",alunos[i].nome);

        printf("Digite a matrícula do %dº aluno: ",i+1);
        scanf("%d",&alunos[i].matr);
        getchar();
    }

    FILE *arquivo = fopen("alunos.bin","wb");

    if(arquivo == NULL) {
        perror("ERRO: FALHA NA ABERTURA DO ARQUIVO");
        return 1;
    }

    fwrite(alunos,sizeof(Aluno),tamanho,arquivo);

    fclose(arquivo);
    
    free(alunos);

    return 0;
}