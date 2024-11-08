#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#define MAX_CONTATOS 100

typedef struct {
    char rua[100];
    int numero;
    char complemento[50];
    char bairro[50];
    char cep[15];
    char cidade[50];
    char estado[3];
    char pais[50];
} Endereco;

typedef struct {
    int ddd;
    char numero[15];
} Telefone;

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char nome[50];
    char email[50];
    Endereco endereco;
    Telefone telefone;
    Data aniversario;
    char observacoes[100];
} Pessoa;

Pessoa agenda[MAX_CONTATOS];
int total_contatos = 0;

void inserir_pessoa();
void imprimir_agenda();
void imprimir_pessoa(Pessoa pessoa);
void buscar_por_nome(char *nome);
void buscar_por_mes_aniversario(int mes);
void remover_pessoa(char *nome);
int dias_totais(Data data);
int calc_dias(Data inicio, Data fim);
void menu();

int main() {
    setlocale(LC_ALL, "Portuguese");
    menu();
    return 0;
}

void inserir_pessoa() {
    if (total_contatos >= MAX_CONTATOS) {
        printf("Agenda cheia!\n");
        return;
    }

    Pessoa *pessoa = &agenda[total_contatos];

    printf("Nome: ");
    fgets(pessoa->nome, 50, stdin);
    pessoa->nome[strlen(pessoa->nome) - 1] = '\0';

    printf("E-mail: ");
    fgets(pessoa->email, 50, stdin);
    pessoa->email[strlen(pessoa->email) - 1] = '\0';

    printf("Rua: ");
    fgets(pessoa->endereco.rua, 100, stdin);
    pessoa->endereco.rua[strlen(pessoa->endereco.rua) - 1] = '\0';

    printf("Número: ");
    scanf("%d", &pessoa->endereco.numero);
    getchar();

    printf("Complemento: ");
    fgets(pessoa->endereco.complemento, 50, stdin);
    pessoa->endereco.complemento[strlen(pessoa->endereco.complemento) - 1] = '\0';

    printf("Bairro: ");
    fgets(pessoa->endereco.bairro, 50, stdin);
    pessoa->endereco.bairro[strlen(pessoa->endereco.bairro) - 1] = '\0';

    printf("CEP: ");
    fgets(pessoa->endereco.cep, 15, stdin);
    pessoa->endereco.cep[strlen(pessoa->endereco.cep) - 1] = '\0';

    printf("Cidade: ");
    fgets(pessoa->endereco.cidade, 50, stdin);
    pessoa->endereco.cidade[strlen(pessoa->endereco.cidade) - 1] = '\0';

    printf("Estado (sigla): ");
    fgets(pessoa->endereco.estado, 3, stdin);
    getchar();

    printf("País: ");
    fgets(pessoa->endereco.pais, 50, stdin);
    pessoa->endereco.pais[strlen(pessoa->endereco.pais) - 1] = '\0';

    printf("DDD: ");
    scanf("%d", &pessoa->telefone.ddd);
    getchar();

    printf("Telefone: ");
    fgets(pessoa->telefone.numero, 15, stdin);
    pessoa->telefone.numero[strlen(pessoa->telefone.numero) - 1] = '\0';

    printf("Data de aniversário:\n");
    printf("Dia: ");
    scanf("%d", &pessoa->aniversario.dia);
    printf("Mês: ");
    scanf("%d", &pessoa->aniversario.mes);
    printf("Ano: ");
    scanf("%d", &pessoa->aniversario.ano);
    getchar();

    printf("Observações: ");
    fgets(pessoa->observacoes, 100, stdin);
    pessoa->observacoes[strlen(pessoa->observacoes) - 1] = '\0';

    total_contatos++;
}

void imprimir_agenda() {
    for (int i = 0; i < total_contatos; i++) {
        printf("Contato %d:\n", i + 1);
        imprimir_pessoa(agenda[i]);
    }
}

void imprimir_pessoa(Pessoa pessoa) {
    printf("Nome: %s\n", pessoa.nome);
    printf("E-mail: %s\n", pessoa.email);
    printf("Endereço: %s, %d, %s, %s, %s, %s, %s, %s\n", 
           pessoa.endereco.rua, pessoa.endereco.numero, pessoa.endereco.complemento,
           pessoa.endereco.bairro, pessoa.endereco.cep, pessoa.endereco.cidade,
           pessoa.endereco.estado, pessoa.endereco.pais);
    printf("Telefone: (%d) %s\n", pessoa.telefone.ddd, pessoa.telefone.numero);
    printf("Aniversário: %02d/%02d/%04d\n", pessoa.aniversario.dia, pessoa.aniversario.mes, pessoa.aniversario.ano);
    printf("Observações: %s\n\n", pessoa.observacoes);
}

void buscar_por_nome(char *nome) {
    for (int i = 0; i < total_contatos; i++) {
        if (strstr(agenda[i].nome, nome) != NULL) {
            imprimir_pessoa(agenda[i]);
        }
    }
}

void buscar_por_mes_aniversario(int mes) {
    for (int i = 0; i < total_contatos; i++) {
        if (agenda[i].aniversario.mes == mes) {
            imprimir_pessoa(agenda[i]);
        }
    }
}

void remover_pessoa(char *nome) {
    for (int i = 0; i < total_contatos; i++) {
        if (strstr(agenda[i].nome, nome) != NULL) {
            for (int j = i; j < total_contatos - 1; j++) {
                agenda[j] = agenda[j + 1];
            }
            total_contatos--;
            printf("Contato removido.\n");
            return;
        }
    }
    printf("Contato não encontrado.\n");
}

void menu() {
    int opcao, mes;
    char nome[50];

    do {
        printf("\n--- Agenda Telefônica ---\n");
        printf("1. Inserir contato\n");
        printf("2. Imprimir agenda\n");
        printf("3. Buscar por nome\n");
        printf("4. Buscar por mês de aniversário\n");
        printf("5. Remover contato\n");
        printf("6. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                inserir_pessoa();
                break;
            case 2:
                imprimir_agenda();
                break;
            case 3:
                printf("Digite o nome para buscar: ");
                fgets(nome, 50, stdin);
                nome[strlen(nome) - 1] = '\0';
                buscar_por_nome(nome);
                break;
            case 4:
                printf("Digite o mês para buscar: ");
                scanf("%d", &mes);
                buscar_por_mes_aniversario(mes);
                break;
            case 5:
                printf("Digite o nome para remover: ");
                fgets(nome, 50, stdin);
                nome[strlen(nome) - 1] = '\0';
                remover_pessoa(nome);
                break;
            case 6:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 6);
}
