/*Exercício 5: Calculadora de Referência
Crie uma função que receba dois números e quatro ponteiros para armazenar o resultado 
da soma, subtração, multiplicação e divisão desses números.*/

#include <stdio.h>
#include <stdlib.h>

void calculadora(int numero1, int numero2, int *soma,int *subtracao, int *multiplicacao, float *divisao) {

    
    *soma = (numero1 + numero2);
    
    *subtracao = numero1 - numero2;
    
    *multiplicacao = numero1 * numero2;
    
    *divisao = (float)numero1 / numero2;


}

int main() {

    int numero1 = 10;
    int numero2 = 20;

    int soma,subtracao ,multiplicacao;
    float divisao;

    calculadora(numero1,numero2,&soma,&subtracao,&multiplicacao,&divisao);

    printf("AS OPERAÇÕES ENTRE O NÚMERO 10 E O NÚMERO 20 SÃO:\n\n");

    printf("SOMA: %d\n",soma);
    printf("SUBTRAÇÃO: %d\n",subtracao);
    printf("MULTIPLICAÇÃO: %d\n",multiplicacao);
    printf("DIVISÃO: %.1f\n",divisao);
      
    return 0;
}