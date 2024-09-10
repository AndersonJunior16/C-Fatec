#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    int i, vet[6];

    for(i = 0;i < 6;i++) {
        printf("Digite o número %d: \n", i+1);
        scanf("%d", &vet[i]);
    }
    printf("Vetor invertido: ");
    for(i = 5;i > -1;i--){
        printf("%d ", vet[i]);
    }
    return 0;
}
