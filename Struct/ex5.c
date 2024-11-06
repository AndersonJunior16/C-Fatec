#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;


typedef struct {
    char nome[50];
    Data data_nasc;
} Pessoa;

int calcularIdade(Data nascimento);

int main(){
    setlocale(LC_ALL, "Portuguese");

    Pessoa p1;

    printf("Digite o nome: ");
    fgets(p1.nome, 50, stdin);
    p1.nome[strlen(p1.nome) -1] = '\0';
    setbuf(stdin, NULL);

    printf("Digite o dia de nascimento: ");
    scanf("%d", &p1.data_nasc.dia);
    setbuf(stdin, NULL);

    printf("Digite o mês de nascimento: ");
    scanf("%d", &p1.data_nasc.mes);
    setbuf(stdin, NULL);
   
    printf("Digite o ano de nascimento: ");
    scanf("%d", &p1.data_nasc.ano);
    setbuf(stdin, NULL);

    int idade = calcularIdade(p1.data_nasc);

    printf("Nome: %s\n", p1.nome);
    printf("Data de nascimento: %d/%d/%d\n", p1.data_nasc.dia, p1.data_nasc.mes, p1.data_nasc.ano);
    printf("Idade: %d", idade);

    return 0;
}

int calcularIdade(Data nascimento) {

    int hoje_dia = 5;
    int hoje_mes = 11;
    int hoje_ano = 2024;
    int idade = hoje_ano - nascimento.ano;
    
    if (hoje_mes < nascimento.mes || (hoje_mes == nascimento.mes && hoje_dia < nascimento.dia)) {
        idade--;
    }

    return idade;
}
