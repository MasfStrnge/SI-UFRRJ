#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int numero = 8;;

    float raiz_quadrada = pow(numero, 1.0/2.0); // ou 0.5
    float raiz_cubica = pow(numero, 1.0/3.0);

    printf("Raiz quadrada: %.4f\n", raiz_quadrada);
    printf("Raiz cúbica: %.4f\n", raiz_cubica);

    return 0;
}