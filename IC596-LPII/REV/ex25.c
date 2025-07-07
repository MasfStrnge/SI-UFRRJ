// 25. Leia n notas com malloc e calcule a média.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tamanho;
    float media, soma = 0;

    printf("Digite a quantidade de notas: ");
    scanf("%d",&tamanho);

    float *notas = malloc(tamanho * sizeof(float));

    if(notas == NULL) {
        perror("ERRO: FALHA NA ALOCAÇÃO DINÂMICA\n");
        return 1;
    }

    for(int i = 0; i < tamanho; i++) {
        printf("Digite a %dº nota: ",i+1);
        scanf("%f",&notas[i]);
        soma += notas[i];
    }

    media = (float)soma / tamanho;

    printf("A média das notas é de: %.2f", media);

    free(notas);

    return 0;
}