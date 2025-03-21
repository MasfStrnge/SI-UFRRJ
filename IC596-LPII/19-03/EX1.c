// 1) Considere que você precisa criar uma função ou programa que recebe o valor do comprimento de 3 arestas
// Assumindo que essas arestas devem se tocar nas extremidades, verifique se é possível formar um triângulo com elas.
// Se for possível formar um triângulo, qual tipo de triângulo seria formado?

#include <stdio.h>
#include <stdlib.h>

int main();
int
main()
{
    // DECLARANDO AS VARIÁVEIS:
    
    float A1,A2,A3;
    
    // OBTENDO OS COMPRIMENTOS DAS ARESTAS:
    
    printf("Digite o valor do comprimento da primeira aresta:\n");
    scanf("%f",&A1);
    printf("Digite o valor do comprimento da segunda aresta:\n");
    scanf("%f",&A2);
    printf("Digite o valor do comprimento da terceira aresta:\n");
    scanf("%f",&A3);

    // VERIFICAR SE É UM TRIÂNGULO:
     if (A1 == 0 || A2 == 0 || A3 == 0) {

         printf("ERROR: UMA DAS ARESTAS TEM VALOR COMO ZERO");

     } else if (A1 < 0 || A2 < 0 || A3 < 0) {

        printf("ERROR: UMA DAS ARESTAS TEM VALOR NEGATIVO");


     } else if (A1 + A2 > A3 && A1 + A3 > A2 && A2 + A3 > A1) {
 
        // CHECANDO O TIPO DE TRIANGULO

         if (A1 == A2 && A1 == A3) {
       
             printf("O TRIÂNGULO É ÉQUILATERO, POIS SEUS COMPRIMENTOS SÃO IGUAIS");

        } else if (A1 != A2 && A1 != A3 && A2 != A3) {

            printf("O TRIÂNGULO É ESCALENO, POIS SEUS COMPRIMENTOS SÃO DIFERENTES");

        } else {

            printf("O TRIÂNGULO É ISÓSCELES, POIS UMA ARESTA É DIFERENTE DAS DEMAIS");

        }
        
    } else {

        printf(" ERROR: OS COMPRIMENTOS NÃO FORMAM UM TRIÂNGULO:\n");
    }
    
    return 0;
}