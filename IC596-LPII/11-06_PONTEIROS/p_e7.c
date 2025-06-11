// 7. Implemente uma função que receba um array de inteiros e seu tamanho, e inverta os elementos
// usando ponteiros.

#include <stdio.h>

void inverte_elementos(int *p, int tamanho )
{

    //int *aux = p;
   // int aux_2 = 0;
    
    for(int i = 0; i < tamanho; i++) {
        // aux_2 = (*(aux+i));
        //*(p+((tamanho - 1) - i)) = aux_2;
        printf("%d ",*(p+((tamanho - 1) - i))); 
        
    }
}

int main(void)
{
    int tamanho = 6, array_inteiro[6] = {12,56,32,88,90,23};

    printf("Os elementos do array ANTES da chamada da função os inverte-los:\n");
    
    for(int i = 0; i < tamanho; i++) {
        printf("%d ",array_inteiro[i]);
    }
    
    printf("\n");

    inverte_elementos(array_inteiro, tamanho);

    /*printf("Os elementos do array DEPOIS da chamada da função os inverte-los:\n");

    for(int i = 0; i < tamanho; i++) {
        printf("%d ",array_inteiro[i]);
    }

    printf("\n");*/

    return 0;

}