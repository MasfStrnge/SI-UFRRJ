#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_DISCOS 8
#define TORRES 3

int torres[TORRES][MAX_DISCOS];  
int topos[TORRES];               
int num_discos;                  
int movimentos;                  


char tabuleiro[3][3];           
char jogador_atual;          

void limpar_tela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}


void inicializar_torres() {
 
    for (int i = 0; i < TORRES; i++) {
        topos[i] = 0;
    }
    
    for (int i = num_discos; i >= 1; i--) {
        torres[0][topos[0]++] = i;
    }
    
    movimentos = 0;
}

void exibir_torres() {
    printf("\nTorre de Hanói - Movimentos: %d\n\n", movimentos);
    
    int max_altura = 0;
    for (int i = 0; i < TORRES; i++) {
        if (topos[i] > max_altura) {
            max_altura = topos[i];
        }
    }
    
    for (int nivel = max_altura - 1; nivel >= 0; nivel--) {
        for (int torre = 0; torre < TORRES; torre++) {
            if (nivel < topos[torre]) {
                int disco = torres[torre][nivel];
                
                for (int e = 0; e < MAX_DISCOS - disco; e++) {
                    printf(" ");
                }
        
                for (int d = 0; d < 2 * disco - 1; d++) {
                    if (d == 0 || d == 2 * disco - 2) {
                        printf("|");
                    } else if (d == disco - 1) {
                        printf(".");
                    } else {
                        printf("_");
                    }
                }
                
                for (int e = 0; e < MAX_DISCOS - disco; e++) {
                    printf(" ");
                }
            } else {
                for (int e = 0; e < 2 * MAX_DISCOS - 1; e++) {
                    printf(" ");
                }
            }
            printf("  ");
        }
        printf("\n");
    }
    
    for (int torre = 0; torre < TORRES; torre++) {
        for (int i = 0; i < 2 * MAX_DISCOS - 1; i++) {
            printf("-");
        }
        printf("  ");
    }
    
    printf("\n");
    
    for (int torre = 0; torre < TORRES; torre++) {
        int espacos = MAX_DISCOS - 1;
        for (int i = 0; i < espacos; i++) {
            printf(" ");
        }
        printf("%d", torre + 1);
        for (int i = 0; i < espacos; i++) {
            printf(" ");
        }
        printf("  ");
    }
    printf("\n");
}

bool mover_disco(int origem, int destino) {
    origem--;
    destino--;
    
    if (origem < 0 || origem >= TORRES || destino < 0 || destino >= TORRES) {
        printf("Torres inválidas. Use valores entre 1 e %d.\n", TORRES);
        return false;
    }
    
    if (topos[origem] <= 0) {
        printf("A torre de origem não tem discos para mover.\n");
        return false;
    }
    
    int disco = torres[origem][topos[origem] - 1];
    
    if (topos[destino] > 0 && torres[destino][topos[destino] - 1] < disco) {
        printf("Movimento inválido. Não é possível colocar um disco maior sobre um menor.\n");
        return false;
    }
    
    torres[destino][topos[destino]++] = disco;
    topos[origem]--;
    movimentos++;
    
    return true;
}

bool verificar_vitoria_hanoi() {
    return (topos[TORRES - 1] == num_discos);
}

void jogar_torre_hanoi() {
    int origem, destino;
    
    printf("Bem-vindo ao Jogo da Torre de Hanói!\n");
    
    do {
        printf("Digite o número de discos (entre 3 e %d): ", MAX_DISCOS);
        scanf("%d", &num_discos);
        getchar();
        
        if (num_discos < 3 || num_discos > MAX_DISCOS) {
            printf("Número inválido. Tente novamente.\n");
        }
    } while (num_discos < 3 || num_discos > MAX_DISCOS);
    
    inicializar_torres();
    
    while (true) {
        limpar_tela();
        exibir_torres();
        
        if (verificar_vitoria_hanoi()) {
            printf("\nParabéns! Você completou o jogo da Torre de Hanói em %d movimentos!\n", movimentos);
            printf("O número mínimo possível de movimentos é %d.\n", (1 << num_discos) - 1);
            break;
        }
        
        printf("\nDigite a torre de origem (1-%d) e a torre de destino (1-%d) separadas por espaço,\n", TORRES, TORRES);
        printf("ou digite 0 0 para voltar ao menu principal: ");
        scanf("%d %d", &origem, &destino);
        getchar(); 
        
        if (origem == 0 && destino == 0) {
            break;
        }
        
        if (!mover_disco(origem, destino)) {
            printf("Pressione ENTER para continuar...");
            getchar();
        }
    }
}

void inicializar_tabuleiro() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tabuleiro[i][j] = ' ';
        }
    }
    
    jogador_atual = 'X';
}

void exibir_tabuleiro() {
    printf("\nJogo da Velha - Jogador atual: %c\n\n", jogador_atual);
    
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);
        if (i < 2) {
            printf("---|---|---\n");
        }
    }
    printf("\n");
}

bool fazer_jogada(int linha, int coluna) {
    if (linha < 0 || linha >= 3 || coluna < 0 || coluna >= 3) {
        printf("Posição inválida. Use valores entre 1 e 3.\n");
        return false;
    }
    
    if (tabuleiro[linha][coluna] != ' ') {
        printf("Posição já ocupada. Escolha outra.\n");
        return false;
    }
    
    tabuleiro[linha][coluna] = jogador_atual;
    
    jogador_atual = (jogador_atual == 'X') ? 'O' : 'X';
    
    return true;
}

char verificar_vitoria_velha() {
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] != ' ' && tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2]) {
            return tabuleiro[i][0];
        }
    }
    
    for (int j = 0; j < 3; j++) {
        if (tabuleiro[0][j] != ' ' && tabuleiro[0][j] == tabuleiro[1][j] && tabuleiro[1][j] == tabuleiro[2][j]) {
            return tabuleiro[0][j];
        }
    }
    
    if (tabuleiro[0][0] != ' ' && tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2]) {
        return tabuleiro[0][0];
    }
    
    if (tabuleiro[0][2] != ' ' && tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0]) {
        return tabuleiro[0][2];
    }
    
    bool empate = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == ' ') {
                empate = false;
                break;
            }
        }
        if (!empate) break;
    }
    
    return empate ? 'E' : ' ';
}

void jogar_jogo_velha() {
    int linha, coluna;
    char resultado;
    
    printf("Bem-vindo ao Jogo da Velha!\n");
    
    inicializar_tabuleiro();
    
    while (true) {
        limpar_tela();
        exibir_tabuleiro();
        
        resultado = verificar_vitoria_velha();
        if (resultado != ' ') {
            if (resultado == 'E') {
                printf("Empate! O jogo terminou sem vencedor.\n");
            } else {
                printf("Jogador %c venceu!\n", resultado);
            }
            break;
        }
        
        printf("Digite a linha (1-3) e a coluna (1-3) separadas por espaço,\n");
        printf("ou digite 0 0 para voltar ao menu principal: ");
        scanf("%d %d", &linha, &coluna);
        getchar(); 
        
        if (linha == 0 && coluna == 0) {
            break;
        }
        
        linha--;
        coluna--;
        
        if (!fazer_jogada(linha, coluna)) {
            printf("Pressione ENTER para continuar...");
            getchar();
        }
    }
    
    exibir_tabuleiro();
    printf("Pressione ENTER para continuar...");
    getchar();
}

int main() {
    int opcao;
    
    while (true) {
        limpar_tela();
        printf("=== MENU DE JOGOS ===\n");
        printf("1. Torre de Hanói\n");
        printf("2. Jogo da Velha\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        
        scanf("%d", &opcao);
        getchar(); 
        
        switch (opcao) {
            case 1:
                jogar_torre_hanoi();
                break;
            case 2:
                jogar_jogo_velha();
                break;
            case 0:
                printf("Obrigado por jogar! Até mais!\n");
                return 0;
            default:
                printf("Opção inválida. Tente novamente.\n");
                printf("Pressione ENTER para continuar...");
                getchar();
        }
    }
    
    return 0;
}