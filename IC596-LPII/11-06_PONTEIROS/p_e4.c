// 4) Dado um array de inteiros, use um ponteiro para imprimir todos os elementos

#include <stdio.h> // direitiva #include que inclui a biblioteca standart input/output (stdio.h).

int main(void) // função principal (main)
{
    int array_inteiro[10] = {1,2,3,4,5,6,7,8,9,10}; // declaração de um array de inteiro com tamanho 10.
    int *ponteiro_array_inteiro = array_inteiro;// declaração de um ponteiro

    for(int i = 0; i < 10; i++) { // chamando a função loop for para executar uma iteração de 0 até 10.
        printf("%d ",*ponteiro_array_inteiro + i); // chamando a função printf para imprimir os valores do array de inteiros indiretamente pelo ponteiro.
    }

    printf("\n"); // ir para a próxima linha
    
    return 0; // retorna o valor 0 para o sistema operacional.   
}