#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
    }

    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    printf("\n");

    for (int down = 0; down < 2; down++) {
        printf("Baixo\n");
    }

    int left = 0;
    while (left < 1) {
        printf("Esquerda\n");
        left++;
    }

    return 0;
}