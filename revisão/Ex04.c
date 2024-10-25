#include <stdio.h> 

int dobro(int numero) {
    return numero * 2;
}

int main() {
    int n;

    scanf("%d", &n);

    printf("o dobro: %d", dobro(n));
}