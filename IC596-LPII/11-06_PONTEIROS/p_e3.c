// 3) Escreva uma função trocar_valores(int *a, int *b) que troque os valores de a e b. Essa função não
// tem retorno.

#include <stdio.h>

void trocar_valores(int *a, int *b) // função para trocar os valores de a e de b
{
    int aux; // criando uma variável auxiliar.

    aux = *a; // variável auxiliar recebe o valor de dentro da memória que o ponteiro 'a' está apontando: 10
    *a = *b; // ponteiro 'a' recebe o valor de dentro da memória que o ponteiro 'b' está apontando e já altera de 10 para 20. 
    *b = aux; // ponteiro 'b' recebe o valor da váriavel aux dentro do espaço de memória que está apontando e altera para 10

}

int main(void)
{
    int a = 10, b = 20; // declaração da váriavel 'a' com valor: 10 e variável 'b' com valor 20.

    printf("Valores de a: %d e de b: %d antes da troca\n", a, b);  // imprime os valores de 'a' e 'b' antes da chamada da função trocar_valores(int *a, int *b).
    
    trocar_valores(&a, &b); // na chamada da função: trocar_valores(int *a, int *b) é utilizado como argumento o endereço de 'a' e o de 'b' utilizando &(address).

    printf("Valores de a: %d e de b: %d depois da troca\n", a, b); // imprime os valores de 'a' e 'b' depois da chamada da função trocar_valores(int *a, int *b).

    return 0; // retorna o valor 0 para o sistema operacional.


}