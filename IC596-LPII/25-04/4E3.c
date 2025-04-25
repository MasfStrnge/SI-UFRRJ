/*3) Crie um programa que receba a idade de uma pessoa e informe se é menor de idade (<18)
adulto ou idoso(>65)*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade;

    printf("Digite a idade da pessoa:\n");
    scanf("%d",&idade);

    if (idade < 18) {

        printf("A pessoa é MENOR DE IDADE.\n");
    
    } else if (idade > 65) {

        printf("A pessoa é IDOSA\n");

    } else {

        printf("A pessoa é ADULTA\n");
    }

    return 0;

}