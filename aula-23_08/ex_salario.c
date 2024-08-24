#include <stdio.h>

int main() {
    float salario, desconto;

    scanf("%f", &salario);

    if (salario <= 1212 ) {
        desconto = salario * 0.075;
    }
    else if (salario >1212.01 && salario <= 2427.45) {
        desconto = salario * 0.09;
    }
    else if (salario > 2427.36 && salario <= 3641.03) {
        desconto = salario * 0.012;
    }
    else if (salario > 3641.04 && salario <= 7087.22) {
        desconto = salario * 0.14;
    }
    else if (salario > 7087.23) {
        desconto = 929;
    }


    printf("O desconto baseado no salario e %f", desconto);
    return 0;
}
