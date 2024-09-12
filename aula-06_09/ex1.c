#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    float reais = 0.0;
    float cotacao_dolar = 0.0;
    scanf("%f", &reais);
    scanf("%f", &cotacao_dolar);

    printf("O valor em dolares é: %.2f", reais * cotacao_dolar);


    return 0;
}
