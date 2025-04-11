/*1) Crie um programa em c que tenha e chame uma função principal as seguintes funções
a) Uma função que transforma uma temperatura em celsius para kelvin
b) Função para converter a temperatura em kelvin para Fahrenheit
c) verifique se um número é um número perfeito
d) Identifique o n ésimo número perfeito solicitado pelo usuário
e) Calcule o fatorial de um número
f) Calcule o fatorial duplo de um número
g) Calcule o primordial de um número*/

#include <stdio.h>
#include <stdlib.h>

float celsius_kelvin(float celsius, float kelvin) {

   kelvin = celsius + 273.15;
   return kelvin;

}

float kelvin_fahrenheit(float kelvin, float fahrenheit) {

    fahrenheit = ((kelvin - 273.15) * 9/5 + 32);
    return fahrenheit;

}

int numero_perfeito(int numero, int soma) {

    soma = 0;
    
    if (numero < 0) {

        printf("ERRO: O NÚMERO DEVE SER POSITIVO");
    }

    for (int i = 0; i < numero; i++ ) {
       
        if (numero % i == 0) {
           
            soma = soma + i;

        }

    }

    if (numero == soma) {

        return numero;
    }

}

int n_perfeito(int numero, int soma) {
    
    soma = 0;
    
    if (numero < 0) {

        printf("ERRO: O NÚMERO DEVE SER POSITIVO");
    }

    for (int i = 0; i < numero; i++ ) {
       
        if (numero % i == 0) {
           
            soma = soma + i;

        }

    }

    if (numero == soma) {

        printf("O número: %d é um NÚMERO PERFEITO\n",numero);
    }



}


int main() {

    printf("%2.f\n",celsius_kelvin(32,0));
    printf("%2.f\n",kelvin_fahrenheit(200,0));
    printf("%d",numero_perfeito(8,0));
    printf("%d\n",n_perfeito());

    return 0;

}

