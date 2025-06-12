#include <stdio.h>

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverBispo(int casas) {
    if (casas == 0) return;
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }
    moverBispo(casas - 1);
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    printf("\nMovimento do Cavalo:\n");
    int movimentos = 1;
    for (int i = 0; i < movimentos * 2; i++) {
        if (i >= 2) break;
        if (i % 2 == 0) {
            printf("Cima\n");
        } else {
            printf("Cima\n");
        }
        for (int j = 0; j < movimentos; j++) {
            if (j != 0) continue;
            printf("Direita\n");
        }
    }

    return 0;
}
