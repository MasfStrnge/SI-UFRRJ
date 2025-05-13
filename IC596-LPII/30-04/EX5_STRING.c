/*5. Leia uma string fornecida pelo usuário e verifique se ela é um palindromo.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {    
    
    int i;
    char palindromo[100];
    int ehPalindromo = 1; 
    
    printf("Digite uma palavra para verificar se é um palíndromo: ");
    scanf("%99s", palindromo);
    
    int tamanho = strlen(palindromo);
    
    for (i = 0; i < tamanho / 2; i++) {
        if (palindromo[i] != palindromo[tamanho - 1 - i]) {
            ehPalindromo = 0;
            break;
        }
    }
    
    printf("'%s' é um palíndromo? %s\n", palindromo, ehPalindromo ? "Sim" : "Não"); // usando o ternario, sei que é novo

    return 0;

}