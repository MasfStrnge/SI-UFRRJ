#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;
    int array_1[] = {1,2,3,4,5}; // tamanho 5

    printf("tamanho do array: %lu ",sizeof(array_1[i]));

    // itere o array de 0 a 4

    for (i = 0; i < sizeof(array_1); i++) {
        
        printf("posição %d é %d,i,array_1[i]\n");
    }
    
    return 0;

}