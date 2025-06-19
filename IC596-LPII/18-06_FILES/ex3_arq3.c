// 3. Pegue a letra de uma música qualquer e salve em um arquivo de texto. 
// Depois, faça um programa que leia esse arquivo e escreva em outro a letra da música contendo apenas as linhas pares.

// Abre um arquivo com a letra de uma música.
// Copia apenas as linhas pares para outro arquivo.
// Usa fgets para ler linha por linha e um contador para saber a posição.


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
    int contador = 0;
    letra_linhas_pares = fopen("nirvana_pares.txt","w");


    while(fgets(buffer,2000,letra_musica)) {
        contador++;

        if (contador % 2 == 0) {
            fprintf(letra_linhas_pares,buffer);
        }
    }
    
    fclose(letra_linhas_pares); 
    fclose(letra_musica);

    return 0;
}