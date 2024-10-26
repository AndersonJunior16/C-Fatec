#include <stdio.h>
#include <string.h>


char nome[50];
int idade;
char sexo;



int main(){

    fgets(nome, sizeof(nome), stdin);
    nome[strlen(nome) -1] = '\0';
    setbuf(stdin, NULL);
    scanf("%d", &idade);
    setbuf(stdin, NULL);
    scanf("%c", &sexo);
    setbuf(stdin, NULL);

    printf("%s\n", nome);
    printf("%d\n", idade);
    printf("%c\n", sexo);
    return 0; 
}