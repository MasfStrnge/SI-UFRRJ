/*1) Faça um programa que calcule a media de uma turma. A quantidade de alunos
  será do primeiro valor passado pelo usuário e deverá ser um inteiro. Em seguida, os 
  próximos parâmetros serão as notas. O usuário deverá indicar uma nota (número real)
  para cada aluno.*/

  #include <stdio.h>
  #include <stdlib.h>

  int main() {

  int escolha = 0;

  while (escolha > -1) {
    
    int tamanho = 0;
    int soma = 0;
    float media = 0;

    printf("Digite a quantidade de alunos na turma:\n");
    scanf("%d",&tamanho);

    int turma[tamanho];

    for (int i = 0; i < tamanho; i++) {
        printf("Digite a nota: %d\n", i+1);
        scanf("%d",&turma[i]);
        soma += turma[i];
    }
    
    media = soma/tamanho;
    printf("A media é: %.1f\n", media);

    printf("Deseja alterar o tamanho da turma?\n");
    printf("1 - SIM            -1 - NÃO\n");
    scanf("%d",&escolha);

  };

    return 0;

}

