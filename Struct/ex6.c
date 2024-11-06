#include <stdio.h>
#include <string.h>
#include <locale.h>


typedef struct{
    char nome[50];
    float valor;
} Produto;

float calcular_total(Produto produto[], int tamanho);

#define TAM 5

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;

    Produto produto[TAM];

    for (i = 0; i < TAM; i++){
        printf("----%dº Produto----\n", i + 1);

        printf("Nome: ");
        fgets(produto[i].nome, 50, stdin);
        setbuf(stdin, NULL);
        produto[i].nome[strlen(produto[i].nome) -1] = '\0';
         
        printf("Valor: ");
        scanf("%f", &produto[i].valor);
        setbuf(stdin, NULL);
        
    }

    printf("\n\n----PRODUTOS CADASTRADOS----\n");
    for (i = 0; i < TAM; i++){
        printf("Prduto %d:\tNome: %s\tValor: %.2f\n", i + 1, produto[i].nome, produto[i].valor);
    }

    float total = calcular_total(produto, TAM);
    printf("\nPreço total: %.2f", total);

    
    return 0;
}

float calcular_total(Produto produto[], int tamanho){

    float total = 0.0;
    int i;

    for (i = 0; i < tamanho; i++){
        total += produto[i].valor;
    }

    return total;

}
