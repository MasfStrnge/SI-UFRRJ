// 24. Criar um menu com as opções: Cadastrar novo aluno, Exibir todos, Salvar em arquivo binário,
// Carregar de arquivo. Usar structs alocadas dinamicamente e arquivos binários.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int matr;
}Aluno;

void cadastrarAluno(Aluno alunos[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf("Digite o nome do %dº aluno: ",i+1);
        fgets(alunos[i].nome,sizeof(alunos[i].nome),stdin);
        
        alunos[i].nome[strcspn(alunos[i].nome,"\n")] = '\0';

        printf("Digite a matrícula do %dº aluno: ",i+1);
        scanf("%d",&alunos[i].matr);
        while(getchar() != '\n');
    }

    printf("ALUNOS CADASTRADOS COM SUCESSO!\n");
}

void exibirTodos(Aluno alunos[],int tamanho) {
    printf("############# ALUNOS CADASTRADOS #############\n");
    for(int i = 0; i < tamanho; i++) {
        printf("%d - %s\t%d\n",i+1,alunos[i].nome,alunos[i].matr);
    }

}

void salvarBinario(Aluno alunos[], int tamanho) {
    FILE *arquivo = fopen("alunos.bin", "wb");
    if(arquivo == NULL) {
        perror("ERRO: FALHA NA ABERTURA DO ARQUIVO\n");
        exit(1);
    }

    fwrite(alunos,sizeof(Aluno),tamanho,arquivo);

    fclose(arquivo);

}

void carregarArquivo(Aluno alunos[],int tamanho) {
    FILE *arquivo = fopen("alunos.bin","rb");
    if(arquivo == NULL) {
        perror("ERRO: FALHA NA ABERTURA DO ARQUIVO.\n");
        exit(1);
    }

    fread(alunos,sizeof(Aluno), tamanho, arquivo);

    for(int i = 0; i < tamanho; i++) {
            printf("%d - %s\t%d\n",i+1,alunos[i].nome,alunos[i].matr);
        }

    fclose(arquivo);
    
}

int main(void) 
{
    int escolha = 0;

    while(escolha != 5) {

    printf("############# MENU #############\n");
    printf("1 - Cadastrar novo aluno.\n");
    printf("2 - Exibir todos.\n");
    printf("3 - Salvar em arquivo binário.\n");
    printf("4 - Carregar de arquivo.\n");
    printf("5 - Sair.\n");

    scanf("%d",&escolha);
    while(getchar() != '\n');

    switch(escolha) {
        case 1:
            int tamanho;
            
            printf("Quantos alunos deseja cadastrar?");
            scanf("%d", &tamanho);
            while(getchar() != '\n');

            Aluno *alunos = malloc(tamanho * sizeof(Aluno));
            if(alunos == NULL) {
                printf("ERRO: FALHA NA ALOCAÇÃO DINÂMICA");
                return 1;
            }
            cadastrarAluno(alunos,tamanho);
        
        break;
        
        case 2:
            if (tamanho == 0) {
                printf("NÃO EXISTE ALUNOS CADASTRADOS!\n");
                return 1;
            } 
            exibirTodos(alunos,tamanho);
        
        break;
        
        case 3: 
            if (tamanho == 0) {
                printf("NÃO EXISTE ALUNOS CADASTRADOS!\n");
                return 1;
            }

            salvarBinario(alunos,tamanho);
        
        break;
        
        case 4: 
            if (tamanho == 0) {
                printf("NÃO EXISTE ALUNOS CADASTRADOS!\n");
                return 1;
            }
            
            carregarArquivo(alunos, tamanho);
        break;
        
        case 5:
            free(alunos);
        break;

    }

    }
    return 0;

}