
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    int i, k, num, vet[6];

    for(i = 0;i < 6;i++) {
        printf("Digite o número %d: \n", i+1);
        scanf("%d", &vet[i]);
    }
    printf("Vetor invertido: ");
    for(i = 0, k = 5;i < k; i++, k-- ){
        num = vet[i];
        vet[i] = vet [k];
        vet[k] = num;

    }
    for(i = 0;i < 6;i++){
    printf("%d ", vet[i]);
    }
    return 0;
}
