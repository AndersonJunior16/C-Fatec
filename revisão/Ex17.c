#include <stdio.h>

int main() {
    int n, contador=0, somaPositivos=0;

    do {
        scanf("%d", &n);
        contador++;

        if (n>0) somaPositivos += n;
    } while (n!=0);

    printf("Numeros digitados: %d, Soma dos positivos %d", contador, somaPositivos);

    
    return 0;
}