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
    char *string;
    int tamanho = 0;
    char caracter;

    string = malloc(sizeof(char));

    if (string == NULL) {
        printf("ERROR: FALHA NA ALOCAÇÃO DINÂMICA");
        return 1;
    }

    while((caracter = getchar()) != '\n') {

        char *temp = realloc(string, tamanho + 1);
        
        if (string == NULL) {
            printf("ERROR: FALHA NA ALOCAÇÃO DINÂMICA");
            free(string);
            return 1;
        }

        string = temp;
        string[tamanho] = caracter;
        tamanho++;
    }
        
    string = realloc(string, tamanho + 1);
    string[tamanho] = '\0';

    printf("Você digitou: %s\n", string);
    free(string);
    
   return 0;

}