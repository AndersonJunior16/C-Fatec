#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    int i, n;
    scanf("%d", &n);

    if (n <= 1) {
        printf("Não é Primo");
    } else {
        for (i=2; i < n; i++) {
            if (n % i == 0) {
                printf("Não é primo");
                break;
            }
        }
    }
        if (i==n) {
            printf("Primo");
        }
    return 0;
}
