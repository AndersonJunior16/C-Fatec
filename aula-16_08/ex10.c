#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    int ano_nas, idade;
    int ano_at = 2024;

    scanf("%d", &ano_nas);
    idade = ano_at - ano_nas;

    printf("Idade: %d", idade);
    return 0 ;
}
