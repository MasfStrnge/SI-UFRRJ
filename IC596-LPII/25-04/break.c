#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 1;
    
    while(i) {

        int j = 1;
        if (num_perfeito(j))
           break;  // "break" ao ser identificado pelo complidador, essa instrução indica
                   // que o laço (loop)

        j++;
        printf("%d é o valor de j e não é perfeito",j);

    }

    return 0;
}