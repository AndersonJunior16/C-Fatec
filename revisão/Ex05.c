#include <stdio.h>

int main() {
    int idade;
    scanf("%d", &idade);

    if (idade>=18) {
        printf("Vc e maior de idade.");
    } else {
        printf("Vc nao e maior de idade.");
    } 
    
    return 0;
}