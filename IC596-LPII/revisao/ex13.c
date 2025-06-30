// 13. Criar um programa que grave os registros Aluno em um arquivo binário e depois os leia e imprima

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    float nota;
}Aluno;

void gravar_e_ler_binario(Aluno aluno[], int tamanho) {
    FILE *arquivo = fopen("alunos.bin","wb");
    if(arquivo == NULL) {
        printf("ERRO: FALHA NA ABERTURA DO ARQUIVO");
        return;
    }

    fwrite(aluno,sizeof(Aluno),tamanho,arquivo);
    fclose(arquivo);

    arquivo = fopen("alunos.bin","rb");

    fread(aluno,sizeof(Aluno),tamanho,arquivo);
    
    for(int i = 0; i < tamanho; i++) {    
        printf("Nome: %s\tNota: %.2f\n", aluno[i].nome,aluno[i].nota);
    }

    fclose(arquivo);
}

int main(void) 
{
    int tamanho;
    Aluno *aluno = NULL;

    printf("Quantos alunos deseja gravar?: ");
    scanf("%d",&tamanho);
    while(getchar() != '\n');

    aluno = malloc(tamanho * sizeof(Aluno));

    for(int i = 0; i < tamanho; i++) {
        printf("Digite o nome do %dº aluno: ", i+1);
        fgets(aluno[i].nome,sizeof(aluno[i].nome),stdin);
        
        aluno[i].nome[strcspn(aluno[i].nome,"\n")] = '\0';

        printf("Digite a nota do aluno %dº: ", i+1);
        scanf("%f",&aluno[i].nota);

        while(getchar() != '\n');
    }

    gravar_e_ler_binario(aluno,tamanho);

    return 0;
}