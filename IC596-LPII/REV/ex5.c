// 5. Faça um programa com while que leia números até o usuário digitar 0 e exiba a soma total. 

#include <stdio.h>

int main(void)
{
    int i = 0, num = 1;
    
    while(num != 0) 
    {
        printf("Digite o numero %d: ",++i);
        scanf("%d", &num);
    }

    return 0;
}
