#include <stdio.h>

int main() {
    // mover a torre 5 casas para a direita
    for(int i = 0; i < 5; i++) {
        printf("direita\n"); // imprime a direção do movimento

        // mover o bispo 5 casas na diagonal
        for(int j = 0; j < 5; j++) {
            printf("cima\n");  // imprime a direção na diagonal
            printf("direita\n"); // imprime a direção na direita
        }

        // mover a rainha 8 casas para a direita
        for(int k = 0; k < 8; k++) {
            printf("direita\n"); // imprime a direção na direita
        }
    }

    return 0;
}

