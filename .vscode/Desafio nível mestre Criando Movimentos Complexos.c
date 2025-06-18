#include <stdio.h>

void torre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    torre(casas - 1);
}

void bispo(int casas) {
    if (casas == 0) return;
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < casas; j++) {
            printf("Cima, Direita\n");
        }
    }
    bispo(casas - 1);
}

void rainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    rainha(casas - 1);
}

void cavalo(int vertical, int horizontal) {
    int i = 0;
    while (i < vertical) {
        printf("Cima\n");
        i++;
        if (i == vertical) {
            for (int j = 0; j < horizontal; j++) {
                printf("Direita\n");
            }
        }
    }
}

int main() {
    torre(5);
    printf("\n");
    bispo(5);
    printf("\n");
    rainha(8);
    printf("\n");
    cavalo(2, 1);
    return 0;
}



