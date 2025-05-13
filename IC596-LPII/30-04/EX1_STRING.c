/*1. Mude o for do exemplo usado para iterar a string para fazer que os caracteres sejam impressos na mesma linha. 
Apenas no final que deve ter uma quebra de linha.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char string[] = "string";

    int i;

    printf("Caracteres da string na mesma linha: ");
    for (i = 0; i < sizeof(string); i++) { 

        printf("%c", string[i]);
}
    printf("\n");

    return 0;


}
