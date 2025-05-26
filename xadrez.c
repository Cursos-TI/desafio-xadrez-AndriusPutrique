#include <stdio.h>

// Definindo constantes para os movimentos
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8

int main() {
    // Movimentos do Bispo
    printf("Movimentos do Bispo:\n");
    for (int i = 1; i <= MOVIMENTO_BISPO; i++) {
        printf("Diagonais: Cima Direita (%d)\n", i);
        printf("Diagonais: Cima Esquerda (%d)\n", i);
        printf("Diagonais: Baixo Direita (%d)\n", i);
        printf("Diagonais: Baixo Esquerda (%d)\n", i);
    }

    // Movimentos da Torre
    printf("\nMovimentos da Torre:\n");
    for (int i = 1; i <= MOVIMENTO_TORRE; i++) {
        printf("Direita (%d)\n", i);
    }

    // Movimentos da Rainha
    printf("\nMovimentos da Rainha:\n");
    for (int i = 1; i <= MOVIMENTO_RAINHA; i++) {
        printf("Esquerda (%d)\n", i);
    }

    return 0;
}
