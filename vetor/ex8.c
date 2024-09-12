#include <stdio.h>

int main() {
    int i, j, x, tam, vet[6];

    for (i=0; i < 6; i++){
        printf("Digite o elemento %d: \n", i + 1);
        scanf("%d", &vet[i]);
    }
    puts("Digite o valor de x: ");
    scanf("%d", &x);

    tam = 6;
    for (i=0; i < tam; i++){
        if(vet[i] == x){
            for (j = i; j < tam - 1; j++){
                vet[j] = vet[j + 1];
            }
            tam--;
            i--;
        }
    }
    puts("Novo vetor: ");
    for (i=0; i < tam; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}
