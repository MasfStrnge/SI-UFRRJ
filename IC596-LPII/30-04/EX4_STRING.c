/*4. Mude o exercício 3 para ler duas strings fornecidas pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int i;
    char palavra1[100], palavra2[100];
    
    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);
    
    int ehAnagrama = 1;
    
    if (strlen(palavra1) != strlen(palavra2)) {
        ehAnagrama = 0;
    } else {

        int freq1[256] = {0};
        int freq2[256] = {0};
        

        for (i = 0; i < strlen(palavra1); i++) {
            freq1[palavra1[i]]++;
        }
        

        for (i = 0; i < strlen(palavra2); i++) {
            freq2[palavra2[i]]++;
        }
        

        for (i = 0; i < 256; i++) {
            if (freq1[i] != freq2[i]) {
                ehAnagrama = 0;
                break;
            }
        }
    }
    
    printf("'%s' e '%s' são anagramas? %s\n", palavra1, palavra2, ehAnagrama ? "Sim" : "Não"); 

    return 0;
}