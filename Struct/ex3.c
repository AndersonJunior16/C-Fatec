#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char nome[50];
    float valor;
} Produto;


int main(){
    setlocale(LC_ALL, "Portuguese");

    Produto p1;
    Produto p2;

    printf("----Produto 1----\n");

    printf("Digite o nome do produto: ");
    fgets(p1.nome, 50, stdin);
    p1.nome[strlen(p1.nome) -1] = '\0';
    setbuf(stdin, NULL);

    printf("Digite o valor do produto: ");
    scanf("%f", &p1.valor);
    setbuf(stdin, NULL);

    printf("----Produto 2----\n");

    printf("Digite o nome do produto: ");
    fgets(p2.nome, 50, stdin);
    p2.nome[strlen(p2.nome) -1] = '\0';
    setbuf(stdin, NULL);

    printf("Digite o valor do produto: ");
    scanf("%f", &p2.valor);
    setbuf(stdin, NULL);

    printf("\n\nProduto 1: Nome: %s, Valor: %.2f\n", p1.nome, p1.valor);
    printf("Produto 2: Nome: %s, Valor: %.2f\n", p2.nome, p2.valor);
    printf("Valor total: %.2f", p1.valor + p2.valor);    

    return 0;
}