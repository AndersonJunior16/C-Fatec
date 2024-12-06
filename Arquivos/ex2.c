#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 2

typedef struct{
    char nome[50];
    int idade;
    float nota;
}Aluno;

void cadastrar_aluno(Aluno aluno[]){
    for (int i = 0; i < MAX; i++){
        printf("%dº - Aluno", i + 1);

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

void exportar_dados(Aluno aluno[]){
    char nome_arquivo[50];
    printf("Digite o nome do arquivo: ");
    fgets(nome_arquivo, 50, stdin);
    nome_arquivo[strcspn(nome_arquivo, "\n")] = 0;
    strncat(nome_arquivo, ".csv" , 50);
    

    FILE *arq = fopen(nome_arquivo, "w");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    fprintf(arq, "Nome;Idade;Nota\n");
    for (int i = 0; i < MAX; i++) {
        fprintf(arq, "%s;%d;%.2f\n", aluno[i].nome, aluno[i].idade, aluno[i].nota);
    }

    fclose(arq);
    printf("Dados exportados com sucesso!\n");
}




int main(){
    Aluno aluno[MAX];
    int opcao  = -1;

    do{
        printf("\n------Sistema de alunos------\n");
        printf("1 - Cadastrar alunos\n");
        printf("2 - Mostrar alunos\n");
        printf("3 - Mostrar aluno de maior nota\n");
        printf("4 - Exportar arquivos\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
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
            case 4:
                system("cls");
                exportar_dados(aluno);
            case 0:
                system("cls");
                printf("Saindo...");
                break;  
            default:
                system("cls");
                printf("Opção invalida");             
            }
    }while (opcao != 0);
    return 0;
}