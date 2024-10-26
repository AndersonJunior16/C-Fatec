#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
} Aluno;


int main(){
    char nome[50];
    Aluno aluno1; //= {"Vitor, 25"};
    fgets(aluno1.nome, sizeof(aluno1.nome), stdin);
    aluno1.nome[strlen(aluno1.nome) -1] = '\0';
    scanf("%d", & aluno1.idade);
    printf("%s\n", aluno1.nome);
    printf("%d\n", aluno1.idade);
    return 0; 
}