// 5) Crie um programa para o jogo da velha. Seu programa deve receber a indicação da jogada,
// alternando entre os jogadores e deve indicar quando alguém ganhar ou quando dar velha.

#include <stdio.h>
#include <stdlib.h>

int main(void);
int
main()

{
   
   // Declarando as variáveis:
   
   int i, j;
   char jogada[2];
   char tabuleiro[3][3];
   char jogador1[20], jogador2[20];
   
   // Mensagem inicial:

   printf("Bem-vindo ao JOGO DA VELHA!!\n");
   
   printf("Jogador 1, digite seu nome:\n");
   scanf("%s", jogador1);
   printf("Jogador 2, digite seu nome:\n");
   scanf("%s", jogador2);
   system("clear");
   
   // Gerando o tabuleiro...
    printf("Gerando o tabuleiro....\n");   
   
    printf(" A  B  C\n");
      
      for (i = 0; i < 3; i++)
      { 
            
         if (i < 2) {
            
            printf("__|___|__\n");
         
         } else {
         
         printf("  |   |\n");
         
         }
         
         for (  j = 0; j < 3; j ++)
         {
            printf("%c",tabuleiro[i][j]);
         }
      }
         
    printf("%s será o 'X'\n", jogador1);
    printf("%s será o 'O'\n", jogador2);
    
    // COMEÇO DA PARTIDA:
    
    
   do {

      printf("%s, escolha a sua jogada, por exemplo: A1\n", jogador1);
      printf("Se algum jogador quiser encerrar o jogo, somente digite 'Q' na campo de jogada\n");
      scanf("%s", jogada);

    
    if (jogada == "A1") {

       tabuleiro[0][0] = 'X';


   }


    if (jogada == "A2") {



    }

    if (jogada == "A3") {



    }

    if (jogada == "B1") {



    }

    if (jogada == "B2") {



    }

    if (jogada == "B3") {



    }

    if (jogada == "C1") {



    }

    if (jogada == "C2") {



    }

    if (jogada == "C3") {



    }    
   
   }

   while (jogada != "Q");
      
   return 0;

}