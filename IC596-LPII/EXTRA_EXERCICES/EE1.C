/*1. Fazer um programa em C que pergunta um valor em metros e imprime o
correspondente em decímetros, centímetros e milímetros.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    float ValorMetr, ValorDec, ValorCen, ValorMil;
    
    printf("Digite o valor em metros:\n");
    scanf("%f",&ValorMetr);

    // Valor em Decímetros (Multiplicar o valor por 10)
    ValorDec = (ValorMetr * 10);

    // Valor em Centímetros (Multiplicar o valor por 100)
    ValorCen = (ValorMetr * 100);

    // Valor em Milímetros (Multiplicar o valor por 1000)
    ValorMil = (ValorMetr * 1000);

    printf("O valor em Decímetro é: %2.f\n",ValorDec);
    printf("O valor em Centímetro é: %2.f\n",ValorCen);
    printf("O valor em Milímetro é: %2.f\n",ValorMil);

    return 0;


}