// 21. Crie um enum com níveis de acesso (ADMIN, USER, GUEST) e use switch para exibir permissões.

#include <stdio.h>
#include <stdlib.h>

typedef enum {
    ADMIN, USER, GUEST
}Acesso;

int main(void) 
{
    Acesso a1;
    int num;

    printf("Digite o número da permissão: ");
    scanf("%d",&num);

    switch(num) {
        case 1: 
            a1 = num;
            printf("Sua permissão é de: %d ",a1);
            break;
        case 2: 
            a1 = num;
            printf("Sua permissão é de: %d ",a1);
            break;        
        case 3: 
            a1 = num;
            printf("Sua permissão é de: %d ",a1);
            break;
    }

    return 0;
}