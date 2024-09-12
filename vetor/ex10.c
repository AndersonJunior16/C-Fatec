#include <stdio.h>

int main() {
    int i, tam, soma = 0, vet[8], vetsoma[8];

    for (i=0; i < 8; i++){
        printf("Digite o elemento %d: \n", i + 1);
        scanf("%d", &vet[i]);
        }
    vetsoma[0] = vet[0];
    for (i=1; i < 8; i++){
        vetsoma[i] = vetsoma[i -1] + vet[i];
    }
    printf("Soma cumulativa: ");
    for (i=0; i < 8; i++){
        printf("%d ", vetsoma[i] );
    }

    return 0;
}
