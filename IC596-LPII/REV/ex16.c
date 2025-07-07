//16. Faça um vetor de 5 pessoas e imprima os dados dos maiores de 18 anos.

#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float altura;
}Pessoa;


int main(void)
{
    Pessoa pessoa[5] = {{"Manuela",23,1.57},{"Natalia",19,1.65}, {"Maria",11,1.50},
    {"Miguel",4,1.20},{"Micael",2,1.10}};

    for(int i = 0; i < 5; i++) {
        if(pessoa[i].idade > 18) {
            printf("Nome: %d\tIdade: %d\tAltura: %.2f\n",pessoa[i]);
        }
    }

    return 0;
}
