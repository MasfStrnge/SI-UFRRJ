// 6. Reescreva o programa anterior usando do while.

#include <stdio.h>

int main(void)
{
    int num = 1, i = 0; 
    
    do {
        printf("Digite o número %d: ",i++);
        scanf("%d",&num);
    
    }while(num != 0);

    return 0;
}