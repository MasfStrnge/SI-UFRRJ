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

int inscrever_aluno_disciplina(Aluno* a, Disciplina* d) {
    
    if (d->totalDeAlunos >= quantidade_alunos) {         // estou acessando os itens da struct disciplina através do ponteiro d.
        printf("ERROR: A DISCIPLINA JÁ ESTÁ COMPLETA\n"); // para saber se a turma já está completa
        return 0;
    
    }

    for (int i = 0; i < d->totalDeAlunos; i++) {          // faço um loop do tamanho da quantidade total de alunos na disciplina no momento.
        if (d->alunos[i]->matricula == a->matricula) {                   // uso o ponteiro d para acessar o array de alunos e acessar as suas matrículas para ver
            printf("ERROR: O ALUNO JÁ ESTÁ INSCRITO NA DISCIPLINA.\n");  // se é igual a matricula do aluno que estou tentando inscrever pelo ponteiro a.
            return 0;
        }

    }
   
   
    d->alunos[d->totalDeAlunos] = a;  // inscrevendo o aluno na disciplina.
    d->totalDeAlunos++;               // atualizando o tamanho de alunos inscritos na disciplina.
    printf("Aluno %s inscrito com sucesso na disciplina %s.\n", a->nome, d->descricao);
    return 1;

}

int main() {

    // Criando disciplina
    Disciplina d1 = {"IC596", "LINGUAGEM DE PROGRAMAÇÃO II",{0},0};
   
    // criar aluno e inscrever na disciplina
    Aluno a1 = {202480, "Marina Oliveira Santos", graduacao};
    inscrever_aluno_disciplina(&a1,&d1);

    Aluno a2 = {202485, "Carlos Eduardo Ferreira", mestrado};
    inscrever_aluno_disciplina(&a2,&d1);
  
    Aluno a3 = {202490, "Beatriz Almeida Costa", doutorado};
    inscrever_aluno_disciplina(&a3,&d1);

    inscrever_aluno_disciplina(&a1,&d1);  // repetitição e lotação

    return 0;
    
}
