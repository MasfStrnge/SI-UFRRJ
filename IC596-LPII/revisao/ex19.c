// 19. Implementar uma função que use variável estática para contar quantas vezes ela foi chamada,
// e imprima esse número a cada chamada.

#include <stdio.h>
#include <stdlib.h>


void contator_de_chamadas() {
    static int variavel_estatica = 0;
    variavel_estatica++;
    printf("A variavel foi chamada %d vezes\n",variavel_estatica);
}

int main(void)
{
    for(int i = 0; i < 10; i++) {
        contator_de_chamadas();
    }

    return 0;
}