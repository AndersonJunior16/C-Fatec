#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char titulo[50];
    char autor[50];
    int ano_publi;
} Livro;


int main(){
    setlocale(LC_ALL, "Portuguese");

    int ano_atual = 2024;
    Livro l1;

    printf("Digite o t�tulo do livro: ");
    fgets(l1.titulo, 50, stdin);
    l1.titulo[strlen(l1.titulo) -1] = '\0';
    setbuf(stdin, NULL);

    printf("Digite o nome do autor: ");
    fgets(l1.autor, 50, stdin);
    l1.autor[strlen(l1.autor) -1] = '\0';
    setbuf(stdin, NULL);

    printf("Digite o ano de publica��o: ");
    scanf("%d", &l1.ano_publi);
    setbuf(stdin, NULL);

    printf("\nT�tulo: %s\nAutor: %s\nAno de publica��o: %d\nIdade do livro: %d", l1.titulo, l1.autor, l1.ano_publi, ano_atual - l1.ano_publi);
    return 0;
}
