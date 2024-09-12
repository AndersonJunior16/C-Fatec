// Ex 10
#include <stdio.h>

int main() {

    int i, qtd_n;
    int valor,n = 1;
    scanf("%d", &qtd_n);

    while (valor<qtd_n) {
        n++;
        if (n>1) {
            for (i=2; i < n; i++) {
                   if (n % i == 0) {
                    break;
                }
            }
            if (i==n) {
                printf("%d \n", n);
                valor++;
            }
        }
    }

    return 0;
}
