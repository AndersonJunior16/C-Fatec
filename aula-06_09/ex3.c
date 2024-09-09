#include <stdio.h>

int main() {
    int tab, i;
    printf("Digite um numero para a tabuada:\n");
    scanf("%d", &tab);

    printf("Tabuada do %d: \n", tab);
    for (i=0;i<=10;i++) {
        printf("%d X %d = %d \n", i, tab, i * tab);
    }

    return 0;
}
