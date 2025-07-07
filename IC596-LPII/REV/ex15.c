// 15. Crie um struct Pessoa com nome, idade e altura. Leia e imprima os dados.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    float altura;
}Pessoa;

int main(void) 
{
    Pessoa pessoa1;
    
    printf("Digite o nome da pessoa: ");
    scanf("%s",pessoa1.nome);

    printf("Digite a idade da pessoa: ");
    scanf("%d",&pessoa1.idade);

    printf("Digite a altura da pessoa: ");
    scanf("%f",&pessoa1.altura);

    printf("Nome: %s | Idade: %d | Altura: %.2f\n",pessoa1.nome,pessoa1.idade,pessoa1.altura);

    return 0;
}
