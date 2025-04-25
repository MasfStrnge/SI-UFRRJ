#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;

    for (i=0;i<10;i++) {

        if (i%2 == 0) {
            continue;  // "continue" volta para o loop a partir do ponto aonde está o "comando"
        }
        
        printf("%d é impar\n",i);
    
    }

    return 0;
}