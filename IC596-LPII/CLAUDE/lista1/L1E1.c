/*Exercício 1: Sistema de Notas (Arrays e Ponteiros)
Uma escola precisa calcular as médias finais dos alunos. Desenvolva um programa que:

-Armazene as notas de até 40 alunos (cada aluno tem 4 notas)
-Use uma matriz para representar as notas (linhas = alunos, colunas = notas)
-Implemente funções que calculem a média de cada aluno usando ponteiros
-Identifique quantos alunos foram aprovados (média >= 7.0)*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float* media_notas() {


}

int alunos_aprovados() {

    int contador_aprovado;
    
    if (media_notas() => 7.0) {

        contador_aprovado++;

    }
}



int main() {

    srand(time(NULL));
    
    int alunos = 40;
    int notas = 4;
    
    float notas_alunos[alunos][notas];

    for (int i = 0; i < alunos; i++) {
        for (int j = 0; j < notas; j++) {
            notas_alunos[i][j] = 1.0 + ((float)rand() / RAND_MAX) * (10.0 - 1.0);
        }
    }

    float* medias = media_notas(notas_alunos, alunos);
    
    int aprovados = alunos_aprovados(medias, alunos);

}