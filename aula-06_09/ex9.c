#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    int i, somafilho = 0, qtdfilho;
    float salario, somasalario = 0, mediasalario, maxsalario, minsalario, mediafilho;

    for (i = 1;i <=5;i++){
        printf("Digite o salario da pessoa %d: \n", i);
        scanf("%f", &salario);
        printf("Digite quantos filhos tem a pessoa %d \n",i);
        scanf("%d", &qtdfilho);

        if (i == 1) {
            maxsalario = minsalario = salario;
        }
        if (salario > maxsalario) {
            maxsalario = salario;
        }
        else if (salario < minsalario) {
            minsalario = salario;
        }
        somasalario = somasalario + salario;
        somafilho = somafilho + qtdfilho;
    }
    mediasalario = somasalario / 5;
    mediafilho = (float)somafilho / 5;

    printf("O maior salario é: %.2f\n", maxsalario);
    printf("O menor salario é: %.2f\n", minsalario);
    printf("A media salarial é: %.2f\n", mediasalario);
    printf("A media de filhos é %.2f", mediafilho);


    return 0;
}
