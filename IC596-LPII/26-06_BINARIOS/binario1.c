#include <stdio.h>
#include <stdlib.h>
/**
    Neste arquivo, você verá a teoria básica sobre arquivos binários e, em seguida, um exemplo prático comentado.

    O que é arquivo binário?
    É uma forma de armazenar dados exatamente como estão na memória do programa. Ou seja, armazena no formato bruto (binário). Então, não faz conversão para caracteres legíveis, como acontece nos arquivos de texto.
    Essa forma oferece maior eficiência com relação a velocidade e espaço de aramzenamento.
    Os tipos dos dados são preservados (tipos, tamanhos, alinhamento).

    Principais funções:
        fopen()	- Abre o arquivo, que já conhecemos.
        fclose() - Fecha o arquivo, que já conhecemos.
        fread() - Lê blocos de dados binários
        fwrite() - Escreve blocos de dados binários
        fseek() - Move o ponteiro de posição no arquivo
        ftell() - Retorna a posição atual do ponteiro
        rewind() - Volta o ponteiro para o início do arquivo, que já conhecemos.

    Pegando carona no que já sabemos sobre arquivos, vamos os modos de abertura.
        "rb"	Leitura binária (arquivo deve existir)
        "wb"	Escrita binária (cria ou sobrescreve)
        "ab"	Acrescenta dados binários no fim
        "rb+"	Leitura e escrita binária (precisa existir)
        "wb+"	Leitura e escrita, apaga se existir
        "ab+"	Leitura e escrita, começando no final


Cuidado!!!
Arquivos binários podem ter problemas de portabilidade entre sistemas com arquiteturas diferentes (ex.: tamanho dos tipos, endianess). Isso quer dizer que você precisa ter cuidado se o arquivo binário for compartilhado entre sistemas diferentes. Tem funções de conversão no caso do endianess.

*/

//Vamos usar e salvar essa estrutura no formato binário, mas poderia ser um inteiro ou algo básico
typedef struct aluno {
    int id;
    char nome[50];
    float nota;
} Aluno;

int main() {
    Aluno aluno = {1, "Ana", 7.5};

    // Grava o primeiro aluno
    FILE *arquivo = fopen("alunos.bin", "wb"); // write binary = apaga o anterior
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    fwrite(&aluno, sizeof(Aluno), 1, arquivo);
    fclose(arquivo); // Fecha após o primeiro

    // Reabre para gravar mais dois alunos de uma vez
    Aluno maisDois[2] = {
        {2, "Bruno", 8.0},
        {3, "Carlos", 9.0}
    };

    arquivo = fopen("alunos.bin", "ab"); // append binary
    if (arquivo == NULL) {
        perror("Erro ao reabrir o arquivo");
        return 1;
    }

    fwrite(maisDois, sizeof(Aluno), 2, arquivo); // grava 2 registros de uma vez

    // Grava mais um antes de fechar
    Aluno ultimo = {4, "Diana", 6.5};
    fwrite(&ultimo, sizeof(Aluno), 1, arquivo);

    fclose(arquivo); // flush final
    printf("Todos os registros foram gravados!\n");

    return 0;
}