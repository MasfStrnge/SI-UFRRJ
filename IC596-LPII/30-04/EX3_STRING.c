/*3. Defina e compare duas strings para verificar se elas formam um anagrama.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
 
    int i;
    char str1[] = "ROMA";
    char str2[] = "AMOR";
    int ehAnagrama = 1; 
    
    if (strlen(str1) != strlen(str2)) {
        ehAnagrama = 0;
    } else {
     
        int frequencia1[256] = {0};
        int frequencia2[256] = {0};
        
        for (i = 0; i < strlen(str1); i++) {
            frequencia1[str1[i]]++;
        }
        
        for (i = 0; i < strlen(str2); i++) {
            frequencia2[str2[i]]++;
        }
        
        for (i = 0; i < 256; i++) {
            if (frequencia1[i] != frequencia2[i]) {
                ehAnagrama = 0;
                break;
            }
        }
    }
    
    printf("'%s' e '%s' são anagramas? %s\n", str1, str2, ehAnagrama ? "Sim" : "Não");  // usando o ternario, sei que é novo

    return 0;

}