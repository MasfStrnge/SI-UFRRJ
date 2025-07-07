#include <stdio.h>
#include <stdlib.h>

// Esse arquivo é para demostrar como são feitas operações com o registro

// Vamos declarar uma struct:

struct Aluno {      // defino uma struct chamada Aluno
    char nome[50];  // dentro da struct, defino uma char de 50 caracteres
    int matricula;  // e também, defino um int.
};

typedef struct {
    char nome[50];
    int matricula;
}Tipo_aluno;

void retorna_matricula(Tipo_aluno *A1) {
    printf("A matrícula do aluno é %d\n", A1->matricula);
}

int main(void) 
{
    int tamanho = 3;
    
    struct Aluno aluno1 = {"Manuela Ferreira", 2024}; 
    Tipo_aluno A1 = {"Manuela Ferreira", 20248};
    retorna_matricula(&A1);

    printf("%d - %s\t%d\n",1,aluno1.nome,aluno1.matricula);
    printf("o tamanho da struct é: %d bytes\n", sizeof(struct Aluno));

    struct Aluno *aluno2 = malloc(tamanho * sizeof(struct Aluno)); // alocamos dinamicamente 
    
    Tipo_aluno *aluno3 = malloc(tamanho * sizeof(Tipo_aluno));

    return 0;
}