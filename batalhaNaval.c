#include <stdio.h>

int main() {
    // Desafio Batalha Naval - MateCheck
    // Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
    // Siga os comentários para implementar cada parte do desafio.

    // Definindo o tamanho do tabuleiro e o tamanho dos navios
    int TAMANHO_TABULEIRO = 10; // Tabuleiro 10x10
    int TAMANHO_NAVIO = 3;      // Cada navio tem 3 posições

    // Inicializando o tabuleiro com 0s (representando água)
    int tabuleiro[10][10] = {0};  // Inicializa todos os elementos com 0

    // Posicionamento do primeiro navio (horizontal)
    int linhaHorizontal = 4, colunaHorizontal = 2;

    // Verificando se o navio cabe horizontalmente
    if (colunaHorizontal + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linhaHorizontal][colunaHorizontal + i] = 3; // 3 representa o navio
        }
    } else {
        printf("Navio horizontal não pode ser posicionado na posição desejada!\n");
    }

    // Posicionamento do segundo navio (vertical)
    int linhaVertical = 1, colunaVertical = 6;

    // Verificando se o navio cabe verticalmente
    if (linhaVertical + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linhaVertical + i][colunaVertical] = 3; // 3 representa o navio
        }
    } else {
        printf("Navio vertical não pode ser posicionado na posição desejada!\n");
    }

    // Exibindo o tabuleiro
    printf("Tabuleiro do Batalha Naval:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);  // Exibe cada célula do tabuleiro
        }
        printf("\n");
    }

    return 0;
}
