#include <stdio.h>

int main(){
    int n1 = 5, n2 = 4;

    // AND
    int resultado =n1 && n2;
    printf("%d \n", resultado);

    // OR
    resultado = n1 || n2;
    printf("%d \n", resultado);

    // NOT
    resultado = !(n1 && n2);
    printf("%d \n", resultado);

    return 0;
}
