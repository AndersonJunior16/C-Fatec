#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int numero;
    scanf("%d", &numero);
    printf("Você digitou: %d", numero);
    return 0;

}
