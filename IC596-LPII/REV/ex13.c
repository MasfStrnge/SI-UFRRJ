//13. Leia 10 números e mostre quantos são positivos, negativos e zeros.

#include <stdio.h>

int main(void)
{
    int numeros[10] = {0,89,-66,-12,98,5,0,33,-24,0};
    int contador_positivo = 0, contador_negativo = 0, contador_zero = 0;

    for(int i = 0; i < 10; i++) {
        if(numeros[i] == 0) {
            contador_zero++;
        }
        else if(numeros[i] < 0) {
            contador_negativo++;
        }
        else {
            contador_positivo++;
        }
    }

    printf("QUANTIDADE DE POSITIVOS: %d\n", contador_positivo);
    printf("QUANTIDADE DE NEGATIVOS: %d\n", contador_negativo);
    printf("QUANTIDADE DE ZEROS: %d\n",contador_zero);

    return 0;
}
