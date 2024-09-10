#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    int soma = 0, i, vet[8];

    for (i = 0; i < 8; i++) {
        printf("Digite o número %d: \n", i+1);
        scanf("%d", &vet[i]);
        soma += vet[i];
    }
    printf("Soma dos elementos: %d", soma);

    return 0;
}
