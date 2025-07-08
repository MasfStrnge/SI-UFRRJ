// 35. Solicite ao usuário o nome de 5 alunos e grave esses nomes em um arquivo txt.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{  
    
    
    FILE *arquivo = fopen("arquivo3.txt","w");

    if(arquivo == NULL) {
        perror("ERRO: FALHA NA ABERTURA DO ARQUIVO");
        return 1;
    } 
    
    for(int i = 0; i < 5; i++) {
        char nome[50];
        printf("Digite o nome do %dº aluno: ",i+1);
        scanf("%s",nome);
        fprintf(arquivo,"%s\n",nome);
    }

    fclose(arquivo);

    return 0;
}