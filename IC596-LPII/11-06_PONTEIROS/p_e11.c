// 11. Agora faça uma função que recebe duas strings e verifica se elas formam um anagrama. Em
// seguida, faça mais uma função que verifica se uma string é um palíndromo.

#include <stdio.h>
#include <string.h>

void eh_anagrama(char *string_1, char *string_2)
{
    int contador = 0;
    
    for(int i = 0; i < strlen(string_1); i++) {
        for(int j = 0; j < strlen(string_1); j++) {
            if(string_1[i] == string_2[j]) {
                ++contador;
            }
        }
    }

    if(contador == strlen(string_1)) {
        printf("As strings são anagramas\n");
    }
    else {
        printf("As strings não são anagramas\n");
    }
}

void eh_palindromo(char *string_1)
{
    int contador = 0;
    char aux[strlen(string_1)];
    strcpy(aux,string_1);

    for(int i = 0; i < strlen(string_1); i++) {
        if(string_1[i] == (aux[strlen(aux)-1-i])) {
            ++contador;
        }
    }

    if(contador == strlen(string_1)) {
        printf("A string é um palíndromo\n");
    }
    else {
        printf("A string não é um palíndromo\n");
    }
}

int main(void)
{
    char string_1[4] = "osso";
    char string_2[4] = "osso";

    eh_anagrama(string_1,string_2);
    eh_palindromo(string_1);

    return 0;
}