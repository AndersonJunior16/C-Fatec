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
            printf("Adi��o: %.2f\n", num1 + num2);
            break;
        case 2:
            printf("Subtra��o: %.2f\n", num1 - num2);
            break;
        case 3:
            printf("Multiplica��o: %.2f\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Divis�o: %.2f\n", num1 / num2);
            } else {
                printf("Erro: Divis�o por zero n�o � permitida.\n");
            }
            break;
        default:
            printf("N�mero inv�lido\n");
            break;
    }

    return 0;
}
