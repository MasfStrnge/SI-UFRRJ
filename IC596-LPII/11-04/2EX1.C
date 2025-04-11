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

        printf("O número: %d é um NÚMERO PERFEITO\n",numero);
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

int fatorial() {


}

int fatorial_duplo() {


}

int primordial(int numero) {

    for (int i = 0; i < numero; i++) {

        if (i > 1 && i )
    }

}

int main() {

    int opcao =;
    
    do {
   
    printf("Escolha uma das opções de 1 a 7:\n");
    switch (opcao) {
        
        case opcao == 1:

    }
   


    } while (opcao == 'S');

    return 0;

}

