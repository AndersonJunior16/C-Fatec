#include <stdio.h>

int main() {
    int idade, i, soma = 0;

    for (i=1; i <=5;i++) {
        printf("Digite a idade da pessoa %d \n", i);
        scanf("%d", &idade);
        if (idade > 18) {
            soma++;
        }
    }

    printf("Pessoas maior de idade: %d", soma);
    return 0;
}
