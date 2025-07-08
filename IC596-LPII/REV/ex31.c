// 31. Use realloc para expandir dinamicamente um array conforme o usuário insere dados.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tamanho = 0;
    int *valores = NULL;

    while(1) {
        int valor;

        printf("Digite um valor: ");
        scanf("%d",&valor);

        if(valor < 0) {
            break;
        }

        int *temp = realloc(valores,(tamanho + 1) * sizeof(int));

        if(temp == NULL) {
            perror("ERRO: FALHA NA ALOCAÇÃO DINÂMICA");
            free(valores);
            return 1;
        }

        valores = temp;
        valores[tamanho] = valor;
        tamanho++;   
    }

    
    



}