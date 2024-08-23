#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    int idade = 10;
    printf("Sua idade é: %d", idade);
    return 0;
}
