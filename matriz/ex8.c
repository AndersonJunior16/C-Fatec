#include <stdio.h>
#include <stdlib.h>

#define N 5

void inicializarTabuleiro(char tabuleiro[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            tabuleiro[i][j] = '-';
        }
    }
}

void exibirTabuleiro(char tabuleiro[N][N]) {
    printf("  1 2 3 4 5\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < N; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int obterPosicao(int *x, int *y) {
    printf("Informe a posição (linha e coluna): ");
    scanf("%d %d", x, y);
    (*x)--;
    (*y)--; 
    if(*x < 0 || *x >= N || *y < 0 || *y >= N) {
        printf("Posição inválida. Tente novamente.\n");
        return 0;
    }
    return 1;
}

int main() {
    char tabuleiro[N][N];
    int navios[2][2];
    int acertos = 0;
    int x, y;

    inicializarTabuleiro(tabuleiro);

    printf("Jogador 1, insira as posições dos dois navios (X Y):\n");
    for (int i=0; i < 2; i++) {
        do {
            printf("Navio %d: ", i + 1);
        } while (!obterPosicao(&navios[i][0], &navios[i][1]));
    }

    system("cls");

    printf("Início do jogo!\n");

    while (acertos < 2) {
        exibirTabuleiro(tabuleiro);

        printf("\nJogador 2, dê o seu palpite.\n");
        do {
        } while(!obterPosicao(&x, &y));

        if(tabuleiro[x][y] != '-') {
            printf("Você já escolheu essa posição. Tente novamente.\n");
            continue;
        }

        int acertou = 0;
        for (int i = 0; i < 2; i++) {
            if (x == navios[i][0] && y == navios[i][1]) {
                printf("Acertou o navio!\n");
                tabuleiro[x][y] = 'X';  
                acertou = 1;
                acertos++;
                break;
            }
        }

        if (!acertou) {
            printf("Tiro na água!\n");
            tabuleiro[x][y] = 'O';
        }
    }

    printf("\nParabéns! Você encontrou os dois navios!\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}
