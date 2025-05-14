/*Nível 2: Aplicações Simples
Exercício 4: Troca de Valores
Implemente uma função trocar que receba dois ponteiros para inteiros e troque os valores das variáveis apontadas. 
Demonstre o funcionamento na função main.*/

#include <stdio.h>
#include <stdlib.h>

int troca(int *ponteiro_valor1, int *ponteiro_valor2) {

    *ponteiro_valor1 = 100;
    *ponteiro_valor2 = 200;

}

int main() {

    int valor1 = 10;
    int valor2 = 20;

    int *ponteiro_valor1 = &valor1;
    int *ponteiro_valor2 = &valor2;
    
    printf("VALOR DA VARIÁVEL 1 ANTES DA TROCA: %d\n", valor1);
    printf("VALOR DA VARIÁVEL 2 ANTES DA TROCA: %d\n", valor2);

    valor1 = troca(ponteiro_valor1,ponteiro_valor2);
    valor2 = troca(ponteiro_valor1,ponteiro_valor2);
    
    printf("\n");
    
    printf("VALOR DA VARIÁVEL 1 DEPOIS DA TROCA: %d\n", valor1);
    printf("VALOR DA VARIÁVEL 2 DEPOIS DA TROCA: %d\n", valor2);

    return 0;
}