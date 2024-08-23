#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    int cel;
    scanf("%d", &cel);

    int fahr = (cel * 1.8) + 32;
    printf("%d graus celcius = %d graus fahrenheit", cel, fahr);
    return 0;
}
