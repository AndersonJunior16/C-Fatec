#include <stdio.h>

int main() {
    float numfl;
    int numint;

    scanf("%d", &numint);
    scanf("%f", &numfl);

    printf("N%cmero inteiro: %d \nN%cmero flutuante: %.2f", 163, numint, 163, numfl);
    return 0;
}
