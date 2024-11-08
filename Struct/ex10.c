#include <stdio.h>
#include <string.h>
#include <locale.h>

#define NUM_LIVROS 3

typedef struct {
    char titulo[100];
    char autor[50];
    int ano_publicacao;
} Livro;

void ler_dados(Livro livros[], int n);
void imprimir_livros(Livro livros[], int n);
void ordenar_livros_por_titulo(Livro livros[], int n);

int main() {
    setlocale(LC_ALL, "Portuguese");

    Livro livros[NUM_LIVROS];
   
    ler_dados(livros, NUM_LIVROS);

    ordenar_livros_por_titulo(livros, NUM_LIVROS);

    printf("\nLivros em ordem alfabética pelo título:\n");
    imprimir_livros(livros, NUM_LIVROS);

    return 0;
}

void ler_dados(Livro livros[], int n) {
    for (int i= 0; i < n; i++) {
        printf("Livro %d:\n", i + 1);

        printf("Título: ");
        fgets(livros[i].titulo, sizeof(livros[i].titulo), stdin);
        livros[i].titulo[strcspn(livros[i].titulo, "\n")] = '\0'; 

        printf("Autor: ");
        fgets(livros[i].autor, sizeof(livros[i].autor), stdin);
        livros[i].autor[strcspn(livros[i].autor, "\n")] = '\0';

        printf("Ano de Publicação: ");
        scanf("%d", &livros[i].ano_publicacao);
        getchar(); 
        printf("\n");
    }
}

void ordenar_livros_por_titulo(Livro livros[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(livros[i].titulo, livros[j].titulo) > 0) {
                Livro temp = livros[i];
                livros[i] = livros[j];
                livros[j] = temp;
            }
        }
    }
}

void imprimir_livros(Livro livros[], int n) {
    for (int i = 0; i< n; i++) {
        printf("Livro %d: Título: %s, Autor: %s, Ano de Publicação: %d\n", 
               i + 1, livros[i].titulo, livros[i].autor, livros[i].ano_publicacao);
    }
}