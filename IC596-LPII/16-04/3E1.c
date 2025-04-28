/*1) Considere um objeto de massa 5kg. Esse objeto cai de uma altura de 30m.
Considerando a aceleração da gravidade 10m/s², qual será a velocidade do 
objeto quando ele atingir o chão?. Qual será a força do impacto do objeto? 

a) Assuma que o objeto saiu do repouso da altura apresentada.
b) Assuma que o objeto já estava com uma velocidade de 12m/s ao passar
na altura de 30m.
c) considere agora que a gravidade é de 9,8m/s²*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h> // precisa para sqrt()

int main() {

    float massa = 5, altura = 30;
    float gravidade = 10;
    float velocidade, forca;

    
    velocidade = sqrt(2 * gravidade * altura);
    forca = massa * gravidade;

    printf("Parte (a):\n");
    printf("Velocidade ao atingir o chão: %.2f m/s\n", velocidade);
    printf("Força peso do objeto: %.2f N\n\n", forca);

    float velocidade_inicial = 12;
    velocidade = sqrt(velocidade_inicial * velocidade_inicial + 2 * gravidade * altura);

    printf("Parte (b):\n");
    printf("Velocidade ao atingir o chão (com velocidade inicial de 12 m/s): %.2f m/s\n", velocidade);
    printf("Força peso do objeto: %.2f N\n\n", forca);

    gravidade = 9.8;
    velocidade = sqrt(2 * gravidade * altura);
    forca = massa * gravidade;

    printf("Parte (c):\n");
    printf("Velocidade ao atingir o chão (g = 9.8 m/s²): %.2f m/s\n", velocidade);
    printf("Força peso do objeto (g = 9.8 m/s²): %.2f N\n", forca);

    return 0;
}