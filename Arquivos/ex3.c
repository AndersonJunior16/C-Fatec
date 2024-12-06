#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

typedef struct{
    char nome[50];
    float preco;
    int qtd;
}Produto;

int produtos_cadastrados = 0;

void cadastrar_produto(Produto produto[]){
    if (produtos_cadastrados == MAX){
        printf("Maximo de produtos cadastrados...");
        return;
    }

    for (int i = produtos_cadastrados; i < MAX; i++){
        system("cls");
        printf("\nDigite o nome do produto: ");
        fgets(produto[i].nome, 50, stdin);
        produto[i].nome[strcspn(produto[i].nome, "\n")] = 0;

        printf("\nDigite o valor: ");
        scanf("%f", &produto[i].preco);
        setbuf(stdin, NULL);

        printf("\nDigite a quantidade do produto: ");
        scanf("%d", &produto[i].qtd);
        setbuf(stdin, NULL);

        produtos_cadastrados++;

        int sair = -1;
        printf("\nDeseja sair? Se sim digite 1: ");
        scanf("%d", &sair);
        setbuf(stdin, NULL);

        if (sair == 1) break;
    }

}


void listar_contas(Produto produto[]){
    for (int i = 0; i < produtos_cadastrados; i++){
        printf("Produto %d\n", i + 1);
        printf("Nome: %s\n", produto[i].nome);
        printf("Valor: %.2f\n", produto[i].preco);
        printf("Quantidade: %d\n\n", produto[i].qtd);
    }
}   

void buscar_nome(Produto produto[]){
    char nome_temp[50];
    printf("Digite o nome do produto que quer ver: ");
    fgets(nome_temp, 50, stdin);
    nome_temp[strcspn(nome_temp, "\n")] = 0;

    for (int i = 0; i < produtos_cadastrados; i++){
        if(strcmp(nome_temp, produto[i].nome) == 0){
            printf("Nome: %s\n", produto[i].nome);
            printf("Valor: %.2f\n", produto[i].preco);
            printf("Quantidade: %d\n\n", produto[i].qtd);
            break;
        }
    }
}

void exportar_dados(Produto produto[]){
    char nome_arq[50];
    printf("Digite um nome para o arquivo: ");
    fgets(nome_arq, 50, stdin);
    nome_arq[strcspn(nome_arq, "\n")] = 0;
    strncat(nome_arq, ".csv", 50);

    FILE *arq = fopen(nome_arq, "w");
    if (arq == NULL){
        printf("Erro ao abrir o arquivo...");
        return;
    }
    fprintf(arq, "Nome;Valor;Quantidade\n");
    for (int i = 0;i < produtos_cadastrados; i++){
        fprintf(arq, "%s;%.2f;%d\n", produto[i].nome, produto[i].preco, produto[i].qtd);
    }

    fclose(arq);
    printf("Dados exportados!");


}

int main() {
    int opcao = -1;
    Produto produto[MAX];
    do{
        printf("-----Menu de cadastro-----");
        printf("1 - Cadastrar produtos\n");
        printf("2 - Listar produtos\n");
        printf("3 - Buscar pelo nome\n");
        printf("4 - Exportar dados\n");
        printf("0 - Sair\n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao);
        setbuf(stdin, NULL);

        switch (opcao){
            case 1:
                system("cls");
                cadastrar_produto(produto);
                break;
            case 2:
                system("cls");
                listar_contas(produto);
                break;
            case 3:
                system("cls");
                buscar_nome(produto);
                break;
            case 4:
                system("cls");
                exportar_dados(produto);
                break;
            case 0:
                system("cls");
                printf("Saindo...");
                break;
        }
    } while(opcao != 0);

    return 0;
}