#include <stdio.h>
#include <string.h>

typedef struct {
    int mes, dia, ano;
} Data;


typedef struct {
    char nome[50];
    int idade;
    char sexo;
    Data nascimento;
} Pessoa;


int main(){
    Pessoa pessoa1;
    fgets(pessoa1.nome, sizeof(pessoa1.nome), stdin);
    pessoa1.nome[strlen(pessoa1.nome) -1] = '\0';
    setbuf(stdin, NULL);
    scanf("%d", & pessoa1.idade);
    setbuf(stdin, NULL);
    scanf("%c", pessoa1.sexo);
    setbuf(stdin, NULL);
    scanf("%d", &pessoa1.nascimento.dia);
    setbuf(stdin, NULL);
    scanf("%d", &pessoa1.nascimento.mes);
    setbuf(stdin, NULL);
    scanf("%d", &pessoa1.nascimento.ano);
    setbuf(stdin, NULL);

    printf("%s\n", pessoa1.nome);
    printf("%d\n", pessoa1.idade);
    printf("%c", pessoa1.sexo);
    printf("%d\n", pessoa1.nascimento.dia);
    printf("%d\n", pessoa1.nascimento.mes);
    printf("%d\n", pessoa1.nascimento.ano);
    return 0; 
}