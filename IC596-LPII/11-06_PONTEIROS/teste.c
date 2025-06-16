#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char **lista_logs = NULL;
    char buffer[1000]; // Buffer temporário para entrada
    int num_logs = 0;
    int capacidade = 0;
    
    printf("########## SISTEMA DE MONITORAMENTO DE LOGS ##########\n");
    printf("Digite os logs de eventos (digite 'FIM' para encerrar):\n\n");
    
    while(1) {
        printf("Log #%d: ", num_logs + 1);
        
        // Lê a entrada do usuário
        if(fgets(buffer, sizeof(buffer), stdin) == NULL) {
            printf("Erro na leitura da entrada.\n");
            break;
        }
        
        // Remove o '\n' do final
        buffer[strcspn(buffer, "\n")] = '\0';
        
        // Verifica se o usuário quer parar
        if(strcmp(buffer, "FIM") == 0) {
            break;
        }
        
        // Se precisar aumentar a capacidade do array
        if(num_logs >= capacidade) {
            capacidade = (capacidade == 0) ? 2 : capacidade * 2;
            char **temp = realloc(lista_logs, capacidade * sizeof(char*));
            
            if(temp == NULL) {
                printf("ERRO: Falha na realocação de memória!\n");
                // Libera a memória já alocada antes de sair
                for(int i = 0; i < num_logs; i++) {
                    free(lista_logs[i]);
                }
                free(lista_logs);
                return 1;
            }
            lista_logs = temp;
        }
        
        // Aloca memória para o log atual (tamanho exato + 1 para '\0')
        int tamanho_log = strlen(buffer) + 1;
        lista_logs[num_logs] = malloc(tamanho_log * sizeof(char));
        
        if(lista_logs[num_logs] == NULL) {
            printf("ERRO: Falha na alocação de memória para o log!\n");
            // Libera a memória já alocada
            for(int i = 0; i < num_logs; i++) {
                free(lista_logs[i]);
            }
            free(lista_logs);
            return 1;
        }
        
        // Copia o log para a memória alocada
        strcpy(lista_logs[num_logs], buffer);
        num_logs++;
        
        printf("Log registrado com sucesso!\n\n");
    }
    
    // Exibe todos os logs registrados
    printf("\n########## LOGS REGISTRADOS (%d total) ##########\n", num_logs);
    
    if(num_logs == 0) {
        printf("Nenhum log foi registrado.\n");
    } else {
        for(int i = 0; i < num_logs; i++) {
            printf("[%d] %s\n", i + 1, lista_logs[i]);
        }
    }
    
    // Libera toda a memória alocada
    for(int i = 0; i < num_logs; i++) {
        free(lista_logs[i]);
    }
    free(lista_logs);
    
    printf("\nMemória liberada com sucesso. Sistema encerrado.\n");
    return 0;
}