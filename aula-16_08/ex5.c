#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    printf("Soma: %d\n", num1 + num2);
    printf("Subtra��o: %d", num1 - num2);
    return 0;

}
