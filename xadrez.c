#include <stdio.h>

int main() {
    // Torre move 5 vezes para a direita.
    // Utiliza laço while.
    int t = 0;
    printf("\nTorre:\n");
    while (t < 5) {
        printf("Direita\n");
        t++;
    }

    // Bispo move 5 vezes na diagonal cima direita.
    // Utiliza laço do while.
    int b = 0;
    printf("\nBispo:\n");
    do {
        printf("Cima, Direita\n");
        b++;
    } while (b < 5);

    // Rainha move 8 vezes para a esquerda.
    // Utiliza laço for.
    printf("\nRainha:\n");
    for (int i = 0; i < 8; i++) {
        printf("Esquerda\n");
    }

    // Cavalo move 2 vezes para cima e uma para direita.
    // Utiliza laços for e while aninhados.
    printf("\nCavalo:\n");
    for (int v = 0; v < 3; v++) {
        // Movimento vertical
        if (v < 2) {
            printf("Baixo, ");
            continue;
        }

        // Movimento horizontal
        int h = 0;
        while (h < 1) {
            printf("Direita\n");
            h++;
            break; // Sai do loop após o movimento lateral
        }
    }

    return 0;
}
