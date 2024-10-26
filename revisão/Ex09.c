#include <stdio.h>

int maior(int comprimento, int vetor[comprimento]) {
    int maior;

    for (int i=0;i<comprimento;i++) {
        if (i==0) maior = vetor[i];
        if (vetor[i] > maior) maior = vetor[i];
    }
    
    return maior;
}

int menor(int comprimento, int vetor[comprimento]) {
    int menor;

    for (int i=0;i<comprimento;i++) {
        if (i==0) menor = vetor[i];
        if (vetor[i] < menor) menor = vetor[i];
    }
    
    return menor;
}

int main() {
    int vetor[4];

    for (int i=0;i<4;i++) {
        scanf("%d", &vetor[i]);
    }
    

    printf("O maior: %d \nO menor: %d ", maior(4, vetor), menor(4, vetor));
    
    return 0;
}