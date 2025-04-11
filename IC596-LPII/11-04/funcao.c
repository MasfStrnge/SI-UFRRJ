#include <stdio.h>
#include <stdlib.h>

int multiplicacao () {

   return 10 * 2;

}

int multiplicacao_parametro (int a, int b) {

    return a * b;
}

void sem_retorno (int a, int b) {

    printf("%d\n",a*b);
    
} // evite entrada e saída dentro de "funções de serviço"


int main() {

    printf("%d\n", multiplicacao());
    printf("%d\n", multiplicacao_parametro(3,81));
    sem_retorno(4,12);

    return 0;

}

/*Observe que as funções criadas estão antes da função principal*/