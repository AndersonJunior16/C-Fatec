#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 5

typedef struct{
    char nome[50];
    int idade;
    float nota;
}Aluno;

void cadastrar_aluno(Aluno aluno[]){
    for (int i = 0; i < MAX; i++){
        printf("%d� - Aluno", i + 1);

        printf("\nDigite o nome do aluno: ");
        fgets(aluno[i].nome, 50, stdin);
        setbuf(stdin, NULL);
        aluno[i].nome[strcspn(aluno[i].nome, "\n")] = 0;

        printf("\nDigite a idade do aluno: ");
        scanf("%d", &aluno[i].idade);
        setbuf(stdin, NULL);

        printf("\nDigite a nota do aluno: ");
        scanf("%f", &aluno[i].nota);
        setbuf(stdin, NULL);
        system("cls");
    }
}

void mostrar_alunos(Aluno aluno[]){
    for (int i = 0; i < MAX; i++){
        printf("\n-=-=-=-%d� Aluno-=-=-=-\n", i + 1);
        printf("Nome: %s\n", aluno[i].nome);
        printf("Idade: %d\n", aluno[i].idade);
        printf("Nota: %.2f\n", aluno[i].nota);

    }
}

void maior_numero(Aluno aluno[]){
    int indice_maior = 0;

    for(int i = 0; i < MAX; i++){
        if (aluno[i].nota > aluno[indice_maior].nota){
            indice_maior = i;
        }
    }

    printf("\n-=-=-=-Aluno com a maior nota-=-=-=-\n");
    printf("Nome: %s\n", aluno[indice_maior].nome);
    printf("Idade: %d\n", aluno[indice_maior].idade);
    printf("Nota: %.2f\n", aluno[indice_maior].nota);

}



int main(){
    setlocale(LC_ALL, "Portuguese");
    Aluno aluno[MAX];
    int opcao  = -1;

    do{
        printf("\n------Sistema de alunos------\n");
        printf("1 - Cadastrar alunos\n");
        printf("2 - Mostrar alunos\n");
        printf("3 - Mostrar aluno de maior nota\n");
        printf("0 - Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);
        setbuf(stdin, NULL);

        switch(opcao){
            case 1:
                system("cls");
                cadastrar_aluno(aluno);
                break;
            case 2:
                system("cls");
                mostrar_alunos(aluno);          
                break;
            case 3:
                system("cls");
                maior_numero(aluno);
                break;
            case 0:
                system("cls");
                printf("Saindo...");
                break;  
            default:
                system("cls");
                printf("Op��o invalida");             
            }
    }while (opcao != 0);
    return 0;
}