#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    char sexo;
} Pessoa;


int main(){
    Pessoa pessoa1;
    fgets(pessoa1.nome, sizeof(pessoa1.nome), stdin);
    pessoa1.nome[strlen(pessoa1.nome) -1] = '\0';
    setbuf(stdin, NULL);
    scanf("%d", & pessoa1.idade);
    setbuf(stdin, NULL);
    scanf("%c", & pessoa1.sexo);
    setbuf(stdin, NULL);

    printf("%s\n", pessoa1.nome);
    printf("%d\n", pessoa1.idade);
    printf("%c", pessoa1.sexo);
    return 0; 
}