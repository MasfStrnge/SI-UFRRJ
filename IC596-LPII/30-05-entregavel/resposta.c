/*Usando struts, enum, typedef e ponteiros, esse será o primeiro entregável do exercício que pede que você crie um programa para cadastrar alunos em disciplinas.
Lembrando que aluno possui matrícula, nome e nível (graduação, mestrado ou doutorado) e disciplina possui id, descrição e um array de alunos. 
A quantidade de alunos define o tamanho (lotação máxima) de uma turma. 
Um aluno só pode se increver na mesma turma uma única vez. Use funções, no mínimo uma função para inscrever um aluno em uma turma. 
Será na função que será verificada a lotação e evitará que o mesmo aluno seja inscrito mais de uma vez.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define quantidade_alunos 3 // usando define porque o const não pode ser usado como tamanho de array


 typedef enum { // Enum do nível
    graduacao,
    mestrado,
    doutorado

}Nivel;

typedef struct {    // struct dos alunos
    int matricula;
    char nome[30];
    Nivel nivel;

}Aluno;

// struct da disciplina
typedef struct {   
    char ID[6];                       // código da disciplina
    char descricao[100];              // discrição da disciplina
    Aluno* alunos[quantidade_alunos]; //lotação
    int totalDeAlunos;                // quantidade de alunos na disciplina

} Disciplina;

void inscrever_aluno_disciplina(Aluno* a, Disciplina* d) {
    if (d->totalDeAlunos >= quantidade_alunos) {  // estou acessando os itens da struct disciplina através do ponteiro d.
        printf("ERROR: A DISCIPLINA JÁ ESTÁ COMPLETA");
    }

}

int main() {

    // Criando alunos
    Aluno a1 = {202480, "Marina Oliveira Santos", graduacao};
    Aluno a2 = {202485, "Carlos Eduardo Ferreira", mestrado};
    Aluno a3 = {202490, "Beatriz Almeida Costa", doutorado};

    // criar uma discplina
    Disciplina d1 = {"IC596", "LINGUAGEM DE PROGRAMAÇÃO II",{0},0};

    // inscrever na disciplina
    inscrever_aluno_disciplina(&a1,&d1);
    inscrever_aluno_disciplina(&a2,&d1);
    inscrever_aluno_disciplina(&a3,&d1);


    inscrever_aluno_disciplina(&a1,&d1);  // repetitição e lotação

    return 0;
    
}
