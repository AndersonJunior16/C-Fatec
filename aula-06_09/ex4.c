#include <stdio.h>

int main() {
    int n, num, maior, menor, soma = 0, i = 0;
    float media;

    printf("Quantos valores inteiros voce deseja inserir? \n");
    scanf("%d", &n);

    do {
        printf("Digite o valor %d:\n", i + 1);
        scanf("%d", &num);

        if (i == 0) {
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
        i++;
    } while (i < n);
    media = (float) soma / n;

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Media dos numeros: %.2f\n", media);

    return 0;
}
