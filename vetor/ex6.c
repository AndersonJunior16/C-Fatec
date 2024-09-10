#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    int i, soma = 0, media, vet[9];

    for(i = 0;i < 9;i++) {
        printf("Digite o número %d: \n", i+1);
        scanf("%d", &vet[i]);
        soma += vet[i];
    }
    media = soma / 9;
    printf("Media aritmetica: %d", media);

    return 0;
}
