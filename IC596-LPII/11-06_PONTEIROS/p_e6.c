// 6. Crie uma função que recebe dois ponteiros para inteiros e retorna o maior valor entre os dois

#include <stdio.h>

int maior_valor(int *valor_1, int *valor_2)
{
    if (*valor_1 > *valor_2) {
        return *valor_1;
    
    } else {      
        return *valor_2;
    }
}

int main(void)
{
    int valor_1 = 1, valor_2 = 6;

    printf("O maior valor é o: %d\n", maior_valor(&valor_1,&valor_2));

    return 0;
}