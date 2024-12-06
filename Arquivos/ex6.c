#include <stdio.h>

int somaRecursiva(int n) {
    if (n <= 0) {
        return 0;
    } else {
        int num;
        printf("Digite um número: ");
        scanf("%d", &num);
        return num + somaRecursiva(n - 1);
    }
}

int main() {
    int total = somaRecursiva(10);
    printf("A soma dos 10 números é: %d\n", total);
    return 0;
}