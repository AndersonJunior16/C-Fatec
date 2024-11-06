#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char nome[50];
    int idade;
    float altura;
} Pessoa;


int main(){
    setlocale(LC_ALL, "Portuguese");

    Pessoa p1;

    printf("Digite o nome: ");
    fgets(p1.nome, 50, stdin);
    p1.nome[strlen(p1.nome) -1] = '\0';
    setbuf(stdin, NULL);

    printf("Digite a idade: ");
    scanf("%d", &p1.idade);
    setbuf(stdin, NULL);

    printf("Digite a altura: ");
    scanf("%f", &p1.altura);
    setbuf(stdin, NULL);


    printf("\nNome: %s\nIdade: %d\nAltura: %.2f\n", p1.nome, p1.idade, p1.altura);
    if (p1.idade >= 18){
        printf("Maior de idade: Sim");
    }
    else{
        printf("Maior de idade: Não");
    }
    return 0;
}
