// 20. Crie um enum com os dias da semana e imprima o nome correspondente a um número digitado.

enum semana {
    segunda, terca, quarta, quinta, sexta, sabado, domingo
};

int main(void)
{
    int num;    
    enum semana dia;

    
    printf("Digite um número: ");
    scanf("%d",&num);

    dia = num;

    printf("O dia da semana é: %d",dia);
}