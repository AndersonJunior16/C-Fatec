#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    int i, maior, menor, vet[7];

    for(i = 0;i < 7;i++) {
        printf("Digite o valor %d:\n", i+1);
        scanf("%d", &vet[i]);

        if (i == 0) {
            maior = menor = vet[i];
        }
        else {
            if (vet[i] > maior) {
                maior = vet[i];
            }
            else if (vet[i] < menor) {
                menor = vet[i];
            }
        }
    }
    printf("Maior elemento: %d \n", maior);
    printf("Menor elemento: %d", menor);

    return 0;
}
