/*2) Faça o mesmo que foi feito como exemplo, mas usando a função calloc*/

#include <stdio.h>
#include <stdlib.h> // Necessário para o uso de malloc e free

// Função que lê as notas dos alunos
float* ler_notas(int qtde) {
    
    float *notas;
    notas = (float*) calloc(qtde,sizeof(float)); // Alocação dinâmica de memória

    for (int i = 0; i < qtde; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    return notas;
}

// Função que calcula a média das notas
float media(float *notas, int qtde) {
    float soma = 0;

    for (int i = 0; i < qtde; i++) {
        soma += notas[i];
    }

    return soma / qtde;
}

int main() {
    float *notas;
    int qtde_alunos = 0;
    float media_turma;

    while (1) {
        printf("Qtde de alunos? (Digite valor <= 0 para sair): ");
        scanf("%d", &qtde_alunos);

        if (qtde_alunos <= 0)
            break;

        notas = ler_notas(qtde_alunos);           // Lê as notas
        media_turma = media(notas, qtde_alunos);  // Calcula a média

        printf("Média da turma: %.1f\n", media_turma);

        free(notas); // Libera a memória alocada
    }

    return 0;
}


