/*1) Faça um programa para inscrever disciplinas, alunos e alunos em disciplinas.
 Um aluno não pode se inscrever na mesma Turma (Disciplina) duas vezes. A inscrição 
 de aluno em disciplina deve ser realizado em uma função especifica que retorna True(1)
 se a inscrição acontecer com sucesso ou False(0) caso contrário.*/

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 struct aluno {

    long int matricula;
    char nome_aluno[50];
 
};
 
 struct disciplina {

    char ID[6];
    char nome_disciplina[50];

 };

 int inscrever_aluno(struct aluno) {

 }

 int inscrever_disciplina(struct disciplina) {

 }

 int inscrever_aluno_disciplina(struct aluno, struct disciplina){

 }

int main() {

    struct aluno aluno1, aluno2, aluno3;
    
    aluno1.matricula = 202480021;
    aluno2.matricula = 202480022;
    aluno3.matricula = 202480023;
        
    strcpy(aluno1.nome_aluno,"Rafael Augusto Pereira Santos");
    strcpy(aluno2.nome_aluno,"Carlos Eduardo Oliveira Silva");
    strcpy(aluno3.nome_aluno,"Ana Clara Rodrigues Costa");

    struct disciplina disciplina1, disciplina2, disciplina3;

    strcpy(disciplina1.ID,"IC596");
    strcpy(disciplina2.ID,"IC280");
    strcpy(disciplina3.ID,"IC807");

    strcpy(disciplina1.nome_disciplina, "LINGUAGEM DE PROGRAMAÇÃO II");
    strcpy(disciplina2.nome_disciplina,"ESTATÍSTICA BÁSICA");
    strcpy(disciplina3.nome_disciplina,"ENGENHARIA DE SOFTWARE");

    inscrever_aluno(aluno1);
    inscrever_disciplina();
    inscrever_aluno_disciplina();

    

}
 
 
 
 
 
 
 