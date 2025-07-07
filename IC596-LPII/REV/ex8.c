// 8. Crie uma função que receba uma idade e diga se é criança, adolescente, adulto ou idoso.

#include <stdio.h>

void faixa_etaria(int idade) {
    if(idade >= 0 && idade < 12) {
        printf("IDADE DE UMA CRIANÇA\n");
    }
    else if(idade >= 12 && idade < 18) {
        printf("IDADE DE UM ADOLESCENTE\n");
    }
    else if(idade >= 18 && idade < 60) {
        printf("IDADE DE UM ADULTO\n");
    }
    else if(idade > 60) {
        printf("IDADE DE UM IDOSO\n");
    }

}

int main(void) 
{
    int idade;

    printf("Digite uma idade: ");
    scanf("%d",&idade);

    faixa_etaria(idade);

    return 0;
}
