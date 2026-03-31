#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    const unsigned int MOV_ESQUERDA=0;
    const unsigned int MOV_DIREITA=1;
    const unsigned int MOV_CIMA=2;
    const unsigned int MOV_BAIXO=3;

    const char DIRECOES[4][12] = {"Esquerda", "Direita", "Cima", "Baixo"};

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int BISPO_MOVIMENTOS = 5; 
    const int BISPO_MOVIMENTOS_POR_LOOP=2;
    const int BISPO_DIRECOES_POR_LOOP[2] = {MOV_CIMA, MOV_DIREITA};
    
    const int TORRE_MOVIMENTOS = 5;
    const int TORRE_MOVIMENTOS_POR_LOOP=1;
    const int TORRE_DIRECOES_POR_LOOP[1] = {MOV_DIREITA};

    const int RAINHA_MOVIMENTOS = 8;
    const int RAINHA_MOVIMENTOS_POR_LOOP=1;
    const int RAINHA_DIRECOES_POR_LOOP[1] = {MOV_ESQUERDA};

    const int CAVALO_MOVIMENTOS_BAIXO = 2;
    const int CAVALO_MOVIMENTOS_ESQUERDA = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < BISPO_MOVIMENTOS; i++) {
        for (int j = 0; j < BISPO_MOVIMENTOS_POR_LOOP; j++) {
            int direcao = BISPO_DIRECOES_POR_LOOP[j];
            printf("%s ", DIRECOES[direcao]);
        }

        printf("\n");
    }

    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimentação da Torre:\n");
    for (int i = 0; i < TORRE_MOVIMENTOS; i++) {
        for (int j = 0; j < TORRE_MOVIMENTOS_POR_LOOP; j++) {
            int direcao = TORRE_DIRECOES_POR_LOOP[j];
            printf("%s ", DIRECOES[direcao]);
        }

        printf("\n");
    }

    printf("\n");
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("Movimentação da Rainha:\n");
    for (int i = 0; i < RAINHA_MOVIMENTOS; i++) {
        for (int j = 0; j < RAINHA_MOVIMENTOS_POR_LOOP; j++) {
            int direcao = RAINHA_DIRECOES_POR_LOOP[j];
            printf("%s ", DIRECOES[direcao]);
        }
        printf("\n");
    }
    printf("\n");
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("Movimentação do Cavalo:\n");
    for (int cavalo_movimentos_para_baixo = 0, cavalo_movimentos_para_esquerda = 0; cavalo_movimentos_para_esquerda < CAVALO_MOVIMENTOS_ESQUERDA; cavalo_movimentos_para_esquerda++) {
        while (cavalo_movimentos_para_baixo < CAVALO_MOVIMENTOS_BAIXO) {
            printf("Baixo\n");
            cavalo_movimentos_para_baixo++;
        }

        printf("Esquerda\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
