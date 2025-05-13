#include <stdio.h>
#include <stdlib.h>

int main() {

    int id_usuario = 10;
    int idade = 21;
    float media= 9.5;

    // 1° teste 
    printf("%d\n", idade);
    printf("%p\n",&idade);
    printf("%f\n",media);
    printf("%f\n",&media);

    // ponteiro
    int *idade_p = &idade; //int* idade_p = &idade;

    // endereço de memória de idade_p
    printf("%p\n",&idade_p);
    //conteúdo de idade_p
    printf("%p\n",idade_p);
    //desreferência de idade_p (conteúdo de idade)
    printf("%d\n",*idade_p);

    idade_p = &id_usuario;
    *idade_p = 11;
    printf("%d\n",id_usuario); //?

    scanf("%d\n",idade_p);
    printf("%d\n",id_usuario);
   
    return 0;

}