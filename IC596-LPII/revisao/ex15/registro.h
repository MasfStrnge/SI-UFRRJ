//15. Criar uma biblioteca aluno.h com funções: cadastrarAluno, imprimirAluno, verificarAprovado.
//Usar essas funções num programa com menu

#ifndef REGISTRO_H
#define REGISTRO_H

typedef struct {
    char nome[50];
    float nota;
}Aluno;

void cadastrarAluno(Aluno aluno[],int tamanho);
void imprimirAluno(Aluno aluno[],int tamanho);
void verificarAprovado(Aluno aluno[],int tamanho);

#endif
