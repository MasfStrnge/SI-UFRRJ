#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int valores[] = {0,3,5,7,9};
    
    printf("%p\n", valores); // endereço de valores
    printf("%p\n", &valores); // endereço igual ao print anterior.
    printf("%p\n",&valores[0]); // ? = o mesmo endereço.
    printf("%d\n", *valores); // deu 0.
    printf("%d\n", valores[0]); // deu 0.
    printf("%d\n",*(valores+1));
    printf("%d\n",*valores+1);

    return 0;
}