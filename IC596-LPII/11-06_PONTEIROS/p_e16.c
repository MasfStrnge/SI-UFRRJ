// 16. Aloque dinamicamente um vetor de n inteiros e preencha-o com valores fornecidos pelo usuário.
// Para sua resposta, observe as orientações a seguir:
// a. Solicite ao usuário quantos números deseja armazenar.
// b. Use malloc para alocar esse espaço, leia os números e exiba-os.
// c. Não esqueça de verificar se o malloc retornou NULL.
// d. Libere a memória no final com free.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *vetor, tamanho = 0; // declaração de variáveis

    while (tamanho >= 0) {
        
        printf("Digite o número de de valores que deseja armazenar: ");
        scanf("%d", &tamanho);
        
        vetor = malloc(tamanho * sizeof(int));

        if (vetor == NULL) {
            printf("A ALOCAÇÃO COM MALLOC RETORNOU NULL");
            return 1;
        }

        for(int i = 0; i < tamanho; i++) {
            printf("Digite o %dº valor de um total de %d valores: ", i+1, tamanho);
            scanf("%d",&vetor[i]);
        }

        printf("\nOs valores armazenador são: ");
        for(int i = 0; i < tamanho; i++) {
            printf("%d ", vetor[i]);
        }

        free(vetor);

        printf("\n");

    }

    return 0;
}