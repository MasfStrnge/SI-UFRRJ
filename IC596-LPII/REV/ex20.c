// 20. Crie um enum com os dias da semana e imprima o nome correspondente a um número digitado.

#include <stdio.h>
#include <stdlib.h>

enum semana {
    segunda, terca, quarta, quinta, sexta, sabado, domingo
};

int main(void)
{
    int num;    
    enum semana dia;

    
    printf("Digite um número: ");
    scanf("%d",&num);

    dia = num;

    printf("O dia da semana é: %d\n",dia);

    return 0;
}