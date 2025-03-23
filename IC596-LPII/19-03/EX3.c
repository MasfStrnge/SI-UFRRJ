// 3) Você consegue repetir a questão anterior para que seu código
// ordene qualquer quantidade de valores passado?


int main() {
    float valores[3];
    float temp;

    // Passo 1: Ler os 3 valores
    for (int i = 0; i < 3; i++) {
        printf("Digite o %dº valor:\n", i + 1);
        scanf("%f", &valores[i]);
    }

    // Passo 2: Ordenar usando Bubble Sort (funciona para qualquer quantidade)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i - 1; j++) {
            if (valores[j] > valores[j + 1]) {
                // Troca os valores se estiverem fora de ordem
                temp = valores[j];
                valores[j] = valores[j + 1];
                valores[j + 1] = temp;
            }
        }
    }

    // Passo 3: Exibir os valores ordenados
    printf("\nValores ordenados:\n");
    for (int i = 0; i < 3; i++) {
        printf("%.2f\n", valores[i]);
    }

    return 0;
}