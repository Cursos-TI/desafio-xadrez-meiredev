#include <stdio.h>

// -------------------- FUNÇÕES RECURSIVAS --------------------

// Função recursiva para mover a Torre
void moverTorre(int casas) {
    if (casas == 0) return; // Caso base: nenhuma casa para mover
    printf("Direita\n");
    moverTorre(casas - 1);  // Chamada recursiva
}

// Função recursiva para mover a Rainha
void moverRainha(int casas) {
    if (casas == 0) return; // Caso base
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o Bispo
// Aqui usaremos também loops aninhados para simular movimento em diagonal
void moverBispo(int casas) {
    if (casas == 0) return; // Caso base

    // Cada movimento do bispo é composto por "Cima" + "Direita"
    for (int v = 1; v <= 1; v++) { // Loop externo para vertical (Cima)
        for (int h = 1; h <= 1; h++) { // Loop interno para horizontal (Direita)
            printf("Cima, Direita\n");
        }
    }

    moverBispo(casas - 1); // Chamada recursiva
}

// -------------------- CAVALO COM LOOPS COMPLEXOS --------------------
// Cavalo se move em "L" → neste caso: duas casas para cima e uma para direita.
void moverCavalo() {
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    printf("Movimento do Cavalo:\n");

    for (int v = 1; v <= movimentosVerticais; v++) { // Loop vertical
        for (int h = 0; h <= movimentosHorizontais; h++) { // Loop horizontal
            if (v <= movimentosVerticais && h == 0) {
                printf("Cima\n");
            }
            else if (v == movimentosVerticais && h == movimentosHorizontais) {
                printf("Direita\n");
                break; // Sai do loop assim que o movimento final acontece
            }
        }
    }
}

// -------------------- FUNÇÃO PRINCIPAL --------------------
int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Torre com recursividade
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Bispo com recursividade + loops aninhados
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    // Rainha com recursividade
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Cavalo com loops aninhados complexos
    printf("\n");
    moverCavalo();

    return 0;
}