#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main() {
    
    int numero = 8;
    float raiz_quadrada, raiz_cubica;

    raiz_quadrada = pow(numero, 1.0/2.0);   
    raiz_cubica = pow(numero, 1.0/3.0);       

    printf("Número: %d\n", numero);
    printf("Raiz quadrada: %.2f\n", raiz_quadrada);
    printf("Raiz cúbica: %.2f\n", raiz_cubica);

    return 0;
}
