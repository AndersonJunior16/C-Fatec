#include <stdio.h>

typedef struct {
    int id;
    char nome[50];
    float valor;
} StructExemplo;

void salvarCSV(StructExemplo dados[], int tamanho, char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    // Escreve o cabeçalho do CSV
    fprintf(arquivo, "ID,Nome,Valor\n");

    // Escreve os dados da struct no arquivo CSV
    for (int i = 0; i < tamanho; i++) {
        fprintf(arquivo, "%d,%s,%.2f\n", dados[i].id, dados[i].nome, dados[i].valor);
    }

    fclose(arquivo);
    printf("Dados salvos com sucesso em %s\n", nomeArquivo);
}
int main() {
    StructExemplo dados[] = {
        {1, "Produto A", 10.50},
        {2, "Produto B", 20.75},
        {3, "Produto C", 30.00}
    };

    int tamanho = sizeof(dados) / sizeof(dados[0]);
    char nomeArquivo[] = "dados.csv";

    salvarCSV(dados, tamanho, nomeArquivo);

    return 0;
}