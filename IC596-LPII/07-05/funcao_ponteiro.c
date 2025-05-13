#include <stdio.h>
#include <stdlib.h>

void muda_idade(int a) {
    a = 22;
    printf("idade dentro da função: %i\n",a);
}

void muda_idade_ref(int *a) {
    *a = 22;
    printf("idade dentro da função: %i\n",*a);

}

int main() {

    int idade = 10;
   
    muda_idade(idade); // passando por valor
    printf("idade em main: %i\n",idade);
    muda_idade_ref(&idade); // passando por referência
    printf("idade em main após passar por referência da variável: %i\n",idade);

    return 0;

}