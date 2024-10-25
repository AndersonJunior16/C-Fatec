#include <stdio.h> 

int parOuImpar(int numero) {
    if(numero%2==0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;

    scanf("%d", &n);

    int resultado = parOuImpar(n);

    if(resultado==true) {
        printf("Par");
    } else {
        printf("Impar");
    }
}