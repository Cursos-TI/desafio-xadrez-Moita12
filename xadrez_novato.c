#include <stdio.h>

int main() {
    // Simulação do movimento da Torre (5 casas para a direita)
    int torreMovimentos = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < torreMovimentos; i++) {
        printf("Direita\n");
    }

    // Simulação do movimento do Bispo (5 casas na diagonal para cima e à direita)
    int bispoMovimentos = 5;
    int contadorBispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo < bispoMovimentos) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Simulação do movimento da Rainha (8 casas para a esquerda)
    int rainhaMovimentos = 8;
    int contadorRainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < rainhaMovimentos);

    return 0;
}
