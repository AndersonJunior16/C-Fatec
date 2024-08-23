#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    int alt, larg, area;

    scanf("%d %d", &alt, &larg);
    area = alt * larg;

    printf("Área: %d", area);
    return 0;
}
