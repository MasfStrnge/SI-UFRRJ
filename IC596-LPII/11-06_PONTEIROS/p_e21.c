// 21. Gerenciar uma lista de strings usando malloc, realloc e free: 
// o usuário deve indicar quantos nomes deseja armazenar; 
// para cada nome, use malloc para alocar a string dinamicamente; 
// use o realloc caso o número de nomes aumente; 
// guarde os nomes e imprima a lista. 
// Não esqueça de liberar a memória alocada no final.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
    int quantidade_de_nomes, escolha = 1;
    char **nome;
    
    printf("Digite a quantidade de nomes que deseja armazenar na lista: ");
    scanf("%d",&quantidade_de_nomes);

    nome = malloc(quantidade_de_nomes * sizeof(char *));

    for(int i = 0; i < quantidade_de_nomes; i++) {
        nome[i] = malloc(100 * sizeof(char));
        
        if(nome[i] == NULL) {
            printf("ERRO: FALHA NA ALOCAÇÃO DINÂMICA\n");
            return 1;
        }

        printf("Digite o %dº nome de %d nomes: ",i+1, quantidade_de_nomes);
        scanf("%s",&nome[i]);
    }

    while(1) {
        
        printf("Deseja aumentar a quantidade de nomes da lista?\n");
        printf("1 - SIM      2 - NÃO\n");
        scanf("%d",&escolha);
        
        if (escolha == 2) break;
  
        int novos_nomes = 0;
        
        printf("Quantos nomes a mais gostaria de adicionar à lista:");
        scanf("%d",&novos_nomes);
        
        char **temp = realloc(nome, (quantidade_de_nomes + novos_nomes) * sizeof(char));
        if (temp == NULL) {
            printf("ERRO: FALHA NA ALOCAÇÃO DINÂMICA\n");
            return 1;
        }
        
        nome = temp;
        
        for(int i = quantidade_de_nomes; i <= quantidade_de_nomes + novos_nomes; i++) {
                nome[i] = malloc(100 * sizeof(char));
                
                if (nome[i] == NULL) {
                    printf("ERRO: Falha na alocação de nome\n");
                    return 1;
                }
                
                printf("Digite o %dº nome de %d nomes: ",i + 1, quantidade_de_nomes);
                scanf("%s",&nome[i]);
        }
        
        quantidade_de_nomes += novos_nomes;
    } 

    printf("\n####### LISTA DOS NOMES ALOCADOS #######\n");
    for(int i = 0; i < quantidade_de_nomes; i++) {
        printf("%s",nome[i]);
    }
    
    free(nome);
    
    return 0;
}