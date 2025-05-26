/*1) Criar uma turma
  2) criar alunos
  3) associar alunos a turma. Um aluno só pode ser associada
  a mesma turma uma única vez.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


const int qt_alunos = 2;

typedef enum tamnho_turma {

    PEQ = 15,
    MED = 30,
    GRA = 60,

}lotacao;

typedef enum nivel_aluno {

    GRAD,
    MEST,
    DOUT,

}Nivel;

typedef struct aluno{

    int matricula;
    char nome[30];
    Nivel nivel;

}Aluno;

typedef struct disciplina {

    int id;
    char desc[30];
    Aluno alunos[qt_alunos];

}Turma;

void iniciar_var_aluno(Aluno *A){
    A -> matricula = -1;
    A -> nivel = GRAD;
    strcpy(A -> nome," ");
}

void criar_turma(Aluno *A) {
    int tam_turma = 0;
    Turma T;
    T.id = -1;
    strcpy(T.desc," ");
    tam.turma = sizeof(T.alunos)/sizeof(int);
     for(i=0; i < tam_turma; i++) {
        T.alunos[i] = *A;
     }
     return T;
}

int incr_turma(Turma *T, Aluno *A) {

    int retorno = 2; // sucesso
    tam_turma = sizeof(T -> alunos)/sizeof(int);
    Aluno  *A_aux = 
}

int main() {

   Aluno A1, A2;
   iniciar_var_aluno(A-vazio);
   iniciar_var_aluno(&A1);
   iniciar_var_aluno(&A2);

   Turma T;
   T.id = 11;
   strcpy(T.desc,"LP2");

   A1.matricula = 123;
   A1.nivel = MEST;
   strcpy(A1.nome,"Manuela");

   A2.matricula = 321;
   A2.nivel = GRAD;
   strcpy(A2.nome,"Maria");


    return 0;


}