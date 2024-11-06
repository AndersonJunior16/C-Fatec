#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 3
#define NUM_NOTAS 3 

typedef struct{

    char nome[50];
    float notas[NUM_NOTAS];

} Aluno;


void armazenar_aluno(Aluno *aluno){
    int i;

        printf("Nome: ");
        fgets(aluno->nome, 50, stdin);
        setbuf(stdin, NULL);
        aluno->nome[strlen(aluno->nome) -1] = '\0';
        

    for (i = 0; i < NUM_NOTAS; i++){
        printf("Nota %d: ", i +1);
        scanf("%f", &aluno->notas[i]);
        setbuf(stdin, NULL);
    }

}

float calc_media(Aluno *aluno){
    int i;
    float soma = 0.0;

    for (i = 0; i < NUM_NOTAS; i++){
        soma += aluno->notas[i];
    }

    return soma /NUM_NOTAS;
}

void imprimir_aluno(Aluno aluno){

    
    printf("Nome: %s\tMedia: %.2f\n", aluno.nome, calc_media(&aluno));

}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i;

    Aluno aluno[TAM];

    for (i = 0; i < TAM; i++){

        armazenar_aluno(&aluno[i]);
        printf("\n");
    }

    printf("\nDados dos alunos e suas medias:\n");
    for (i = 0; i < TAM; i++){
        printf("Aluno %d:\t", i + 1);
        imprimir_aluno(aluno[i]);

    }

    
    return 0;
}