//12. Leia 5 notas de um aluno e mostre a maior e a menor nota.

#include <stdio.h>

int main(void)
{
    float notas[5] = {9.5,3,8.3,5.4,10}, maior = -9999,menor = 9999;

    for(int i = 0; i < 5; i++) {
        if(notas[i] > maior) {
            maior = notas[i];
        }
        else if (notas[i] < menor) {
            menor = notas[i];
        }
    }

    printf("A maior nota é: %.2f\n",maior);
    printf("A menor nota é: %.2f\n",menor);

    return 0;
}
