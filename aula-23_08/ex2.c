#include <stdio.h>

int main() {
    int n1 = 5, n2 = 3;

    // igualdade (==)
    int resultado = n1 == n2;
    printf("%d \n", resultado);
    // desigualdade (!=)
    resultado = n1 != n2;
    printf("%d \n", resultado);
    //maior que (>)
    resultado = n1 > n2;
    printf("maior que %d \n", resultado);
    //menor que (<)
    resultado = n1 < n2;
    printf("menor que %d \n", resultado);
    //maior ou igual
    resultado = n1 >= n2;
    printf("maior ou igual %d \n", resultado);
    //menor ou igual
    resultado = n1 < n2;
    printf("Menor ou igual que %d \n", resultado);

    return 0;
}
