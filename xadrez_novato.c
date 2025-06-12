#include <stdio.h>

int main() {
    
    int torreMovimentos = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < torreMovimentos; i++) {
        printf("Direita\n");
    }

    
    int bispoMovimentos = 5;
    int contadorBispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo < bispoMovimentos) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

 
    int rainhaMovimentos = 8;
    int contadorRainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < rainhaMovimentos);

    return 0;
}
