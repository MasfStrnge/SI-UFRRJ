// 23. Mais uma para mostrar como a alocação dinâmica permite a construção de sistemas flexíveis
//que lidam com entradas de tamanho indefinido — algo muito comum em software real, como logs,
//listas de arquivos, redes, bancos de dados em memória, etc.

// [Enunciado] Considere um um sistema de monitoramento de redes que registra eventos importantes
// instantaneamente. Cada evento será registrado como uma mensagem de texto. Não é possível prever
// quando os eventos acontecerão ou quantos serão, mas cada um pode gerar uma mensagem com
// tamanho variável a depender da ocorrência.

// Implemente um sistema que armazena os logs de eventos em tempo de execução. Cada log é uma
// string inserida pelo usuário. Use malloc ou realloc para criar uma lista dinâmica de strings, onde
// cada string também é alocada dinamicamente. O usuário informa os logs e digita "FIM" para
// encerrar. No final, imprima todos os logs e libere a memória alocada. Use malloc e realloc
// corretamente, observando se algum ponteiro fica nulo pela não alocação de memória.Cada
// mensagem de log deve ser copiada para uma área alocada dinamicamente com malloc.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
    int quantidade_logs;
    char **lista_logs;

    printf("########## BEM-VINDO AO REGISTRO DE LOGS ##########\n");
    printf("Quantos logs gostaria de registrar?\n");
    scanf("%d",&quantidade_logs);
    getchar();

    lista_logs = malloc(quantidade_logs * sizeof(char*));
    
    if(lista_logs == NULL) {
        printf("ERRO: FALHA NA ALOCAÇÃO DINÂMICA");
        return 1;
    }
    
    for(int i = 0; i < quantidade_logs; i++) {
        lista_logs[i] = malloc(300 * sizeof(char));
        
        if(lista_logs[i] == NULL) {
            printf("ERRO: FALHA NA ALOCAÇÃO DINÂMICA");
            return 1;
        }

        printf("########## %dº REGISTRO ##########\n",i+1);
        fgets(lista_logs[i], 300, stdin);
        
        lista_logs[i][(strcspn(lista_logs[i], "\n")] = 0;
        
        if(lista_logs[i] == "FIM") {
            return 1;
        }
    }

    printf("########## LOGS REGISTRADOS ##########\n");
    for(int i = 0; i < quantidade_logs; i++) {
        printf("%dº LOG: %s\n",i+1,lista_logs[i]);
    }

    for(int i = 0; i < quantidade_logs; i++) {
        free(lista_logs[i]);
    }

    free(lista_logs);

    return 0;
}