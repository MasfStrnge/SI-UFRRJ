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

int eh_perfeito(int num) {
    int soma = 0;

    if (num < 1) {
        return 0; // Deixa o erro para ser tratado fora
    }

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }

    return soma == num; // retorna só 1 (verdadeiro) ou 0 (falso)
}

void n_perfeito(int n) {
    if (n <= 0) {
        printf("d) ERRO: O número deve ser positivo.\n");
        return;
    }

    int contador = 0;
    int num = 1;

    while (contador < n) {
        if (eh_perfeito(num)) {
            contador++;
        }
        num++;
    }

    printf("d) O %d° número perfeito é: %d\n", n, num - 1);
}

int fatorial(int num) {
    int fat = 1;

    for (int i = 2; i <= num; i++) {
        fat *= i;
    }

    return fat;
}


int fatorial_duplo(int num) {
    int fat = 1;

    for (int i = num; i >= 1; i -= 2) {
        fat *= i;
    }

    return fat;
}

int primorial(int num) {
    int i, j; 
    int cont, p = 1;

    for (i = 2; i <= num; i++) {
        cont = 0; // zera o contador pra cada número

        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                cont++;
            }
        }

        if (cont == 2) { // se tiver só dois divisores, é primo
            p *= i; // multiplica no primorial
        }
    }

    return p;
}

int main() {
    printf("a) 32°C em Kelvin: %.2f K\n", celsius_kelvin(32));
    printf("b) 280 K em Fahrenheit: %.2f °F\n", kelvin_fahrenheit(280));

    int num_teste = 6;
    if (eh_perfeito(num_teste)) {
        printf("c) O número %d é perfeito.\n", num_teste);
    } else {
        printf("c) O número %d não é perfeito.\n", num_teste);
    }
    
    int num;
    printf("Digite a posição do número perfeito que deseja (ex: 1 para o primeiro): no máximo até o 3 pois números perfeitos são extremamente raros ");
    scanf("%d", &num);
    n_perfeito(num);
    printf("e) O fatorial de 7 é: %d\n", fatorial(7));
    printf("f) O fatorial duplo de 7 é: %d\n", fatorial_duplo(7));
    printf("g) O primorial de 10 é: %d\n", primorial(10));

    return 0;
}
