#include <stdio.h>

void move_torre(int casas, char direcao[]);
void move_bispo(int casas, char direcaov[], char direcaoh[]);
void move_rainha(int casas, char direcao[]);

int main() {
    // Torre move 5 vezes para a direita.
    printf("\nTorre:\n");
    move_torre(5, "Direita");

    // Bispo move 5 vezes na diagonal cima direita.
    printf("\nBispo:\n");
    move_bispo(5, "Cima", "Direita");

    // Rainha move 8 vezes para a esquerda.
    printf("\nRainha:\n");
    move_rainha(8, "Esquerda");

    // Cavalo move 2 vezes para cima e uma para direita.
    // Utiliza laços for e while aninhados.
    printf("\nCavalo:\n");
    for (int v = 0; v < 3; v++) {
        // Movimento vertical
        if (v < 2) {
            printf("Cima, ");
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

void move_torre(int casas, char direcao[]) {
    if (casas <=0) return;
    printf("%s\n", direcao);
    move_torre(casas - 1, direcao);
}

void move_bispo(int casas, char direcaov[], char direcaoh[]) {
    if (casas <=0) return;
    short parar = 1;

    do {
        printf("%s, ", direcaov);
        do {
            printf("%s\n", direcaoh);
            parar = 0;
        } while (parar);
    } while (parar);

    move_bispo(casas - 1, direcaov, direcaoh);
}


void move_rainha(int casas, char direcao[]) {
    if (casas <=0) return;
    printf("%s\n", direcao);
    move_rainha(casas - 1, direcao);
}
