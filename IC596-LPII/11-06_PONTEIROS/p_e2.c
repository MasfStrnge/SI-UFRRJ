//2) Declare um inteiro e um ponteiro para ele. Use o ponteiro para alterar o valor da variável.

#include <stdio.h>

int main(void)
{
    int variavel = 10, *ponteiro_variavel; // declaração da variável e do ponteiro
    
    ponteiro_variavel = &variavel; // ponteiro recebe o endereço da variável
    
    printf("Antes da alteração do valor: %d\n6",variavel); // imprimindo o valor original da variável

    *ponteiro_variavel = 20; // alterando o valor da variável ao acessar a memória que o ponteiro está apontando e atribuindo um valor a ela.

    printf("Depois da alteração do valor: %d\n", variavel); // imprimindo o valor original da variável.

    return 0; // retorna o valor 0 para o sistema operacional

}