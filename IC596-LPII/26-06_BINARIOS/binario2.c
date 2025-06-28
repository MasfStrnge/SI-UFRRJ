#include <stdio.h>
#include <stdlib.h>


/**
Agora, vamos ler o arquivo binário que criamos em binario1.c, mas antes, faça:
0. Abra o arquivo em um editor de texto (bloco de notas já serve). O conteúdo é legível?
   RESPOSTA: O CONTEÚDO NÃO É LEGÍVEL. 
1. Modifique o código de binario1.c para gravar um segundo aluno e terceiro alunos. Deixe o código de gravação do primeiro aluno como está. Reabra o arquivo após o primeiro fclose. Grave dois registros de uma só vez.
   RESPOSTA: MODIFICADO.
2. Antes de fechar o arquivo, use o fwrite mais uma vez para salvar outro aluno.
   RESPOSTA: FEITO.
3. Quantos alunos estão salvos no arquivo agora?
   RESPOSTA: 3 ALUNOS.
4.Faça algo totalmente diferente. Salve um inteiro, um char e uma string, cada um em um arquivo diferente. Salve em arquivo binário. Tem que funcionar, porque qualquer coisa pode ser salvo em sua forma binária.
   RESPOSTA: FEITO DENTRO DO ARQUIVO DESAFIO

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
    int id;
    char nome[50];
    float nota;
} Aluno;

int main() {
    Aluno alunos[3] = {
        {100, "Tiago", 9.9},
        {200, "André", 7.9},
        {300, "Claudio", 6.5}
    };

    FILE *arquivo = fopen("alunos.bin", "wb");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo para escrita");
        return 1;
    }

    fwrite(alunos, sizeof(Aluno), 3, arquivo);

    fclose(arquivo);
    printf("Arquivo 'alunos.bin' gravado com sucesso!\n");

    return 0;
}
