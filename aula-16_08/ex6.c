#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    float num1;
    float num2;
    int valor;

    scanf("%f %f %d", &num1, &num2, &valor);

    switch (valor) {
        case 1:
            printf("Adição: %.2f\n", num1 + num2);
            break;
        case 2:
            printf("Subtração: %.2f\n", num1 - num2);
            break;
        case 3:
            printf("Multiplicação: %.2f\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Divisão: %.2f\n", num1 / num2);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            break;
        default:
            printf("Número inválido\n");
            break;
    }

    return 0;
}
