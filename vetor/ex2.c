#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    int somapar = 0,somaimpar = 0, i, vet[10];

    for (i = 0; i < 10; i++) {
        printf("Digite o número %d: \n", i+1);
        scanf("%d", &vet[i]);
        if (vet[i] % 2 == 0){
            somapar++;
        }
        else{
            somaimpar++;
        }
    }
    printf("Números par: %d\n", somapar);
    printf("Números impares: %d", somaimpar);
    return 0;
}
