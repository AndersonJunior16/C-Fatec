#include <stdio.h>
#define COMPRIMENTO 5


int eh_palindromo(char vetor[], int comprimento) {
    for (int i = 0; i < comprimento / 2; i++) {
        if (vetor[i] != vetor[comprimento - 1 - i]) {
            return 0; 
        }
    }
    return 1;
}

int main() {
    char vetor[COMPRIMENTO];

    for (int i = 0; i < COMPRIMENTO; i++) {
        scanf(" %c", &vetor[i]);
    }

    if (eh_palindromo(vetor, COMPRIMENTO)) {
        printf("A palavra ");
        for (int i = 0; i < COMPRIMENTO; i++) {
            printf("%c", vetor[i]);
        }
        printf(" e um palindromo\n");
    } else {
        printf("A palavra ");
        for (int i = 0; i < COMPRIMENTO; i++) {
            printf("%c", vetor[i]);
        }
        printf(" nao e um palindromo\n");
    }

    return 0;
}
