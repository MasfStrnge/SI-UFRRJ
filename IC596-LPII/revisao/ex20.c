// 20. Criar uma função gerarID() que retorna um ID sequencial único (ex: 1, 2, 3...) usando variável
// estática interna.

#include <stdio.h>
#include <stdlib.h>

void gerarID() {
    static int ID = 0;
    ID++;
    printf("ID GERADA: %d\n", ID);
}

int main(void) {
    for(int i = 0; i < 10; i++) {
         gerarID();
    }
    
    return 0;
}