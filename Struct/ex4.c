#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char modelo[50];
    int data_fab, kms;
} Carro;


int main(){
    setlocale(LC_ALL, "Portuguese");

    int ano_atual = 2024;
    Carro c1;

    printf("Digite o nome: ");
    fgets(c1.modelo, 50, stdin);
    c1.modelo[strlen(c1.modelo) -1] = '\0';
    setbuf(stdin, NULL);

    printf("Digite o ano de fabricação: ");
    scanf("%d", &c1.data_fab);
    setbuf(stdin, NULL);

    printf("Digite a quilometragem do carro: ");
    scanf("%d", &c1.kms);
    setbuf(stdin, NULL);


    printf("\n\nModelo: %s\nData de fabricação: %d\nQuilometragem: %d\nIdade do carro: %d", c1.modelo, c1.data_fab, c1.kms, ano_atual - c1.data_fab);

    return 0;
}