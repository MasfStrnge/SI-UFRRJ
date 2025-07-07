// 4. Implemente a tabuada de um número (1 a 10) usando for.

#include <stdio.h>

int main(void) 
{
    int num = 2;

    for(int i = 0; i < 11; i++) {
        printf(" %d X i = %d\n",num,i, (num * i));
    }

    return 0;
}
