#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça deve se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // -------------------- TORRE --------------------
    // Torre move em linha reta (horizontal/vertical).
    // Aqui vamos simular 5 casas para a direita usando FOR.
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // -------------------- BISPO --------------------
    // Bispo move em diagonais.
    // Aqui vamos simular 5 casas na diagonal para cima e direita usando WHILE.
    printf("\nMovimento do Bispo:\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // -------------------- RAINHA --------------------
    // Rainha pode se mover em todas as direções.
    // Aqui vamos simular 8 casas para a esquerda usando DO-WHILE.
    printf("\nMovimento da Rainha:\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    return 0;
}
