#include <stdio.h>

int main() {
    int i, k, num, vet[5];

    for (i=0; i < 5; i++){
        printf("Digite o elemento %d: \n", i + 1);
        scanf("%d", &vet[i]);
        }
    for (i=0; i < 4; i++){
        for(k = 0; k < 5 - i - 1;k++){
            if(vet[k] > vet[k + 1]){
                num = vet[k];
                vet[k] = vet[k + 1];
                vet[k + 1] = num;
            }
        }
    }
    puts("Vetor ordenado: ");
    for (i=0; i < 5; i++){
        printf("%d ", vet[i]);
        }

    return 0;
}
