#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUTOS 10 
#define MAX_CLIENTES 10

typedef struct {
    char nome[50];
    float preco;
} Produto;

typedef struct {
    char nome[50];
    int id;
    Produto Produto[MAX_PRODUTOS];
} Cliente;

int total_clientes = 0;

void cadastrar_cliente(Cliente cliente[]){
    if (total_clientes == MAX_CLIENTES){
        printf("Número máximo de clientes atingido\n");
        return;
    }
    
    for (int i = total_clientes; i < MAX_CLIENTES; i++){
        printf("Digite o nome do cliente: ");
        scanf("%s", cliente[i].nome);
        printf("Digite o id do cliente: ");
        scanf("%d", &cliente[i].id);
        total_clientes++;

        int opcao = -1;
        printf("Deseja cadastrar um produto para o cliente? (1 - Sim, 0 - Não): ");
        scanf("%d", &opcao);
        if (opcao == 0){
            break;
        }
    }
}

void cadastrar_produto(Cliente cliente[]){
    int id;

    printf("Digite o id do cliente: ");
    scanf("%d", &id);

    for (int i = 0; i < total_clientes; i++){
        if (cliente[i].id == id){
            for (int j = 0; j < MAX_PRODUTOS; j++){
                printf("Digite o nome do produto: ");
                scanf("%s", cliente[i].Produto[j].nome);
                printf("Digite o preço do produto: ");
                scanf("%f", &cliente[i].Produto[j].preco);

                int opcao = -1;
                printf("Deseja cadastrar outro produto? (1 - Sim, 0 - Não): ");
                scanf("%d", &opcao);
                if (opcao == 0){
                    break;
                } 
            }
        }
    }
}

void listarClientes(Cliente cliente[]){
    for (int i = 0; i < total_clientes; i++){
        printf("Nome: %s\n", cliente[i].nome);
        printf("Id: %d\n", cliente[i].id);
        for (int j = 0; j < MAX_PRODUTOS; j++){
            printf("Produto: %s\n", cliente[i].Produto[j].nome);
            printf("Preço: %.2f\n", cliente[i].Produto[j].preco);
        }
    }
}

int main() {
    int opcao = -1;

    Cliente cliente[MAX_CLIENTES];

    do {
        printf("1 - Cadastrar cliente\n");
        printf("2 - Cadastrar produto\n");
        printf("3 - Listar clientes\n");
        printf("4 - Listar produtos\n");
        printf("5 - Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar_cliente(cliente);
                break;
            case 2:
                cadastrar_produto(cliente);
                break;
            case 3:
                listarClientes(cliente);
                break;
            case 4:
                //listarProdutos(cliente);
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida\n");
        }
    } while (opcao != 5);

    return 0;  
}