/*2. Defina um array de char de tamanho fixo 20. Depois escreva apenas seu primeiro nome no array. 
Verifique o tamanho do array usando sizeof e usando strlen. Qual a diferença? O que as funções fazem de diferente?*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char nome[20] = "Manuela";
    
    printf("USANDO SIZE OF: %lu\n",sizeof(nome));
    printf("USANDO STRLEN: %lu\n",strlen(nome));
    printf("A diferença é que sizeof retorna o tamanho total do array (20 bytes),\n");
    printf("enquanto strlen conta apenas os caracteres até encontrar '\\0' (5 caracteres).\n");

    return 0;

}