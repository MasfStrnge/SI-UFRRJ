/*2) Faça uma função que recebe o raio de uma circuferência por parâmetro
e calcula a área, o diâmetro e comprimento da circuferência. Assumindo que 
pi = 3.14 e se for pi = 3.14159265358979323846?*/

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

void calcular_circunferencia(float raio) {
   
    const float pi_exato = 3.14159265358979323846;
    const float pi = 3.14;
    
    float area = pi * raio * raio;
    float diametro = 2 * raio;
    float comprimento = 2 * pi * raio;

    float Area = pi_exato * raio * raio;
    float Diametro = 2 * raio;
    float Comprimento = 2 * pi_exato * raio;

    printf("UTILIZANDO O PI REDUZIDO:\n");
    printf("Área: %.5f\n", area);
    printf("Diâmetro: %.5f\n", diametro);
    printf("Comprimento: %.5f\n\n", comprimento);
  
    printf("UTILIZANDO O PI MAIS EXATO:\n");
    printf("Área: %.5f\n", Area);
    printf("Diâmetro: %.5f\n", Diametro);
    printf("Comprimento: %.5f\n", Comprimento);
}

int main() {
    
    float raio;
    printf("Digite o raio da circunferência: ");
    scanf("%f", &raio);

    calcular_circunferencia(raio);

    return 0;
}
