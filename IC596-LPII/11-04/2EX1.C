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

float celsius_kelvin(float celsius) {

   return celsius + 273.15;

}

float kelvin_fahrenheit(float kelvin) {

    return ((kelvin - 273.15) * 9/5 + 32);

}

void eh_perfeito(int num) {
    
    int soma = 0;
    
    if (num < 0) {
        
        printf("ERRO: O NÚMERO DEVE SER POSITIVO\n");
        return;
    }

    for (int i = 1; i < num; i++) {
       
        if (num % i == 0) {
            
            soma += i;
        }
   
    }

    if (num == soma) {
        printf("c) O número %d é perfeito\n",num);
    
    } else {
        printf("c) O numero %d não é perfeito\n",num);
    }
}

void n_perfeito(int num) {

    do {
    
        eh_perfeito(num); 
    
    } while (num != 0)
    

}




int fatorial(int num) {

    if (num == 0 || num == 1)
    return 1;
    
    int fat = num * (num - 1);
    
    for (int i = 2; i < num; i++) {
        fat *= (num - i);
    }
    
    return num = fat;

}

int fatorial_duplo(int num) {

    if (num == 0 || num == 1) {
        return 1;
    }
    
    int fat = num * (num - 2);
    
    for (int i = 4; i < num; i++) {
        fat *= (num - i);
        i += 1;
    }
    
    return num = fat;
}

int primorial(int num) {

    int i, j; 
    int cont = 0, p = 1;
    
    for (i = 2; i <= num; i++) {       // Mudar o numero verificado    
        cont = 0; // reinicializa o contador
        
        for (j = 1; j <= i; j++) {   // loop para verificar se o número é primo.
        
            if ( i % j == 0) {  // vendo se o mod resulta em zero ex: 2 % 1 == 0
                cont += 1;      // se for verdadeiro, soma mais um ao contador
        }
        
    }
    
    if (cont == 2) {     // se o contador for igual a 2 (todo número primo tem 2 divisores) 
            
        p *= i;      //se for verdadeiro, ele se multiplica com os outros números primos,
                    // resultando no número primordial de n 
     
       }
}

return num = p;

}

int main() {

   
    
    printf("a) 32° celsius em kelvin: %.2f°\n",celsius_kelvin(32));
    
    printf("b) 280° kelvin em fahrenheit: %.2f°\n",kelvin_fahrenheit(280));
    
    eh_perfeito(6);
    
    int num;
    printf("Digite o número para verificar se é perfeito ou não\n");
    scanf("%d",&num);
    n_perfeito(num);
    
    printf("e) O fatorial de 7 é: %d\n",fatorial(7));
    
    printf("f) O fatorial duplo de 7 é: %d\n",fatorial_duplo(7));
    
    printf("g) O primorial de 7 é: %d\n",primorial(10));    
    
    return 0;

}

