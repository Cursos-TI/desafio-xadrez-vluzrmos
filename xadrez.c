#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentacao_bispo(int movimentos, char *dir_horizontal, char *dir_vertical) {
    if (movimentos < 1) {
        return;
    }

    printf("%s %s\n", dir_horizontal, dir_vertical);
    movimentacao_bispo(movimentos - 1, dir_horizontal, dir_vertical);
}

void movimentacao_torre(int movimentos, char *direcao) {
    if (movimentos < 1) {
        return;
    }

    printf("%s\n", direcao);
    movimentacao_torre(movimentos - 1, direcao);
}

void movimentacao_rainha(int movimentos, char *direcao) {
    if (movimentos < 1) {
        return;
    }

    printf("%s\n", direcao);
    movimentacao_rainha(movimentos - 1, direcao);
}

int main() {
    const unsigned int MOV_ESQUERDA=0;
    const unsigned int MOV_DIREITA=1;
    const unsigned int MOV_CIMA=2;
    const unsigned int MOV_BAIXO=3;

    char DIRECOES[4][12] = {"Esquerda", "Direita", "Cima", "Baixo"};

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

    // const int CAVALO_MOVIMENTOS_BAIXO = 2;
    // const int CAVALO_MOVIMENTOS_ESQUERDA = 1;
    const int CAVALO_MOVIMENTOS_CIMA = 2;
    const int CAVALO_MOVIMENTOS_DIREITA = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("Movimentação do Bispo:\n");
    movimentacao_bispo(BISPO_MOVIMENTOS, DIRECOES[BISPO_DIRECOES_POR_LOOP[0]], DIRECOES[BISPO_DIRECOES_POR_LOOP[1]]);

    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimentação da Torre:\n");
    movimentacao_torre(TORRE_MOVIMENTOS, DIRECOES[TORRE_DIRECOES_POR_LOOP[0]]);
    printf("\n");
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("Movimentação da Rainha:\n");
    movimentacao_rainha(RAINHA_MOVIMENTOS, DIRECOES[RAINHA_DIRECOES_POR_LOOP[0]]);
    printf("\n");
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("Movimentação do Cavalo:\n");
    for (int cavalo_movimentos_para_cima = 0, cavalo_movimentos_para_direita = 0; cavalo_movimentos_para_direita < CAVALO_MOVIMENTOS_DIREITA; cavalo_movimentos_para_direita++) {
        while (cavalo_movimentos_para_cima < CAVALO_MOVIMENTOS_CIMA) {
            printf("Cima\n");
            cavalo_movimentos_para_cima++;
        }

        printf("Direita\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    
    // > Criada a função recursiva movimentacao_bispo() para simular a movimentação do Bispo em diagonal.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    // > Implementada a movimentação do Cavalo utilizando loops aninhados (verificar lógica de movimentação acima).

    return 0;
}
