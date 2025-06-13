//18. Usando malloc e realloc para trabalhar com strings de tamanho variável. Faça um programa que: 
// a. peça ao usuário para digitar uma string sem saber o tamanho de antemão; 
// b. Use realloc em um loop para ir armazenando os caracteres digitados; 
// c. quando o usuário pressionar ENTER, finalize a string e imprima-a;
// d. libere a memória.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *string, 
    int tamanho = 0;
    char caracter;

    string = malloc(string + 1);

    if (string == NULL) {
        printf("ERROR: FALHA NA ALOCAÇÃO DINÂMICA");
        return 1;
    }

    while (caracter = getchar())
    
    
    printf("Digite uma string (aperte ENTER para finalizar): ");
    for(int i = 0; i < strlen(string); i++) {
        scanf("")
    }
    
    
    
    
    scanf("%s",&string);


}