#include <stdio.h>

int main() {
    int diaNascimento, mesNascimento, anoNascimento;
    int diaAtual, mesAtual, anoAtual;
    int idade;

    scanf("%d", &diaNascimento);
    scanf("%d", &mesNascimento);
    scanf("%d", &anoNascimento);
    scanf("%d", &diaAtual);
    scanf("%d", &mesAtual);
    scanf("%d", &anoAtual);

    if (diaAtual>=diaNascimento && mesAtual>=mesNascimento) {
        idade = anoAtual - anoNascimento;
    } else {
        idade = anoAtual - anoNascimento - 1;
    }

    printf("Idade: %d", idade);

    
    return 0;
}