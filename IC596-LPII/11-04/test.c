#include <stdio.h>
#include <stdlib.h>

int main() {

    int num = 7;
    int fat = num * (num - 2);
    
    for (int i = 4; i < num; i++) {
         
        fat *= (num - i);

    }
    
    printf("%d",fat);

    return 0;

}