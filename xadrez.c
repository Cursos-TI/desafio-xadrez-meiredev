#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça deve se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // -------------------- TORRE --------------------
    // Torre move em linha reta (horizontal/vertical).
    // Simulação: 5 casas para a direita usando FOR.
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // -------------------- BISPO --------------------
    // Bispo move em diagonais.
    // Simulação: 5 casas na diagonal para cima e direita usando WHILE.
    printf("\nMovimento do Bispo:\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // -------------------- RAINHA --------------------
    // Rainha pode se mover em todas as direções.
    // Simulação: 8 casas para a esquerda usando DO-WHILE.
    printf("\nMovimento da Rainha:\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    // -------------------- CAVALO --------------------
    // Cavalo se move em "L": duas casas em uma direção
    // e depois uma casa perpendicularmente.
    // Simulação: 2 casas para baixo e 1 casa para a esquerda.
    // Aqui usamos loops aninhados:
    //   - Loop FOR para as duas casas para baixo
    //   - Loop WHILE para a casa à esquerda
    printf("\nMovimento do Cavalo:\n");

    int passosBaixo = 2;
    int passosEsquerda = 1;

    // Loop FOR controla o movimento para baixo
    for (int k = 1; k <= passosBaixo; k++) {
        printf("Baixo\n");
    }

    // Loop WHILE controla o movimento para esquerda
    int l = 1;
    while (l <= passosEsquerda) {
        printf("Esquerda\n");
        l++;
    }

    return 0;
}