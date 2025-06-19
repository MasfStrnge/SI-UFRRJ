// 3. Pegue a letra de uma música qualquer e salve em um arquivo de texto. 
// Depois, faça um programa que leia esse arquivo e escreva em outro a letra da música contendo apenas as linhas pares.

#include <stdio.h>

int main(void)
{
    FILE *letra_musica = NULL;
    FILE *letra_linhas_pares = NULL;

    letra_musica = fopen("nirvana.txt", "r");
    
    if (letra_musica == NULL) {
        printf("ERROR: FALHA NA LEITURA DO ARQUIVO");
        return 1;
    }

    char buffer[2000];
    fgets(buffer,2000,letra_musica);
    printf("%s\n", buffer);

    fclose(letra_musica);

    return 0;
}