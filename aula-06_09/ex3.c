#include <stdio.h>

int main() {
    int num, i, maior, menor, soma = 0;
    float media;

    for(i = 1;i <= 3;i++) {
        printf("Digite o valor %d:\n", i);
        scanf("%d", &num);

        if (i == 1) {
            maior = menor = num;
        }
        else {
            if (num > maior) {
                maior = num;
            }
            else if (num < menor) {
                menor = num;
            }
        }
    soma = soma + num;
    }

    media = (float) soma / 5;

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Media dos numeros: %f\n", media);

    return 0;
}
