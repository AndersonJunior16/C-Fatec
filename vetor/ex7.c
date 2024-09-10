#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    int i, x, y, vet[7];

    for (i = 0;i < 7;i++) {
        printf("Digite o número %d: \n", i+1);
        scanf("%d", &vet[i]);
    }
    printf("Digite o valor de x: \n");
    scanf("%d", &x);
    printf("Digite o valor de y: \n");
    scanf("%d", &y);

    for (i = 0;i < 7;i++){
        if (vet[i] == x) {
            vet[i] = y;
        }
    }

    printf("Vetor resultante: ");
    for (i = 0;i < 7;i++){
        printf("%d ", vet[i]);
    }

    return 0;
}
