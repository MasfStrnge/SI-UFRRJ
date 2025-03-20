// 5) Crie um programa para o jogo da velha. Seu programa deve receber a indicação da jogada,
// alternando entre os jogadores e deve indicar quando alguém ganhar ou quando dar velha.

#include <stdio.h>
#include <stdlib.h>

int main(void);
int
main()
{
   
   // Declarando as variáveis:
   
   int i, j, jogada1, jogada2;
   char tabuleiro[3][3];
   
   // Mensagem inicial:

   printf("Bem-vindo ao JOGO DA VELHA!!");
   printf("Escolha um numero entre 1 e 2 para decidir quem começará a partida");
   
   printf("Por favor, Jogador 1:");
   scanf("%d", &jogada1);
   printf("Por favor, Jogador 2:");
   scanf("%d", &jogada2);

   // Gerando o tabuleiro...

      for (i = 0; i < 3; i++)
         
        printf("_");
         
         for (  j = 0; j < 3; j ++)
         {
            printf("%c",tabuleiro[i][j]);
         }
         
    return 0;

}