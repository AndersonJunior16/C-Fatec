#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    float numfl;
    int numint;

    scanf("%d", &numint);
    scanf("%f", &numfl);

    printf("N�mero inteiro: %d \nN�mero flutuante: %.2f", numint, numfl);
    return 0;
}
