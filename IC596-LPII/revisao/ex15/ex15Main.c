//15. Criar uma biblioteca aluno.h com funções: cadastrarAluno, imprimirAluno, verificarAprovado.
//Usar essas funções num programa com menu

#include <stdio.h>
#include <stdlib.h>
#include "registro.h"

int main(void) 
{
    int escolha = 0;
    int tamanho = 0;

    while(1) {

    printf("################## REGISTRO DE ALUNOS ####################\n");
    printf("1 - CADASTRAR ALUNOS.\n");
    printf("2 - IMPRIMIR ALUNOS REGISTRADOS.\n");
    printf("3 - VERIFICAR ALUNOS APROVADOS.\n");
    printf("4 - ENCERRAMENTO.\n");
    printf("ESCOLHA UMA OPÇÃO: ");
    scanf("%d",&escolha);

    switch(escolha) {
        case 1:
            system("clear"); 
            printf("Quantos alunos deseja cadastrar?: ");
            scanf("%d", &tamanho);
            while(getchar() != '\n');

            Aluno *aluno = malloc(tamanho * sizeof(Aluno));
            cadastrarAluno(aluno,tamanho);
        break;

        case 2:
            system("clear");
            if(tamanho == 0) {
                printf("NÃO EXISTE ALUNOS REGISTRADOS!\n");
            }
            else {
                imprimirAluno(aluno,tamanho);
            }
        break;

        case 3:
            system("clear");
            if(tamanho == 0) {
                printf("NÃO EXISTE ALUNOS REGISTRADOS!\n");
            }
            else {
                verificarAprovado(aluno,tamanho);
            }
        break;

        case 4:
            printf("PROGRAMA ENCERRADO\n");
        break;
    }
    }
    return 0;
}