#include <stdio.h>
#include <string.h>

void main() {
    FILE *arq;
    arq = fopen("01.txt", "r");
    if (arq == NULL){
        printf("Falha\n");
        return;
    }

    /*char frase[100];

    printf("Digite uma frase: ");
    scanf("%{^0}", &frase);

    fprintf(arq, frase);*/

    /*fprintf(arq, "Itor;1;2\n");
    fprintf(arq, "Maria;1;2\n");
    fprintf(arq, "João;1;2\n");*/

    char nome[20];
    int n1, n2;

    fscanf(arq, "%[^;];%d;%d\n", nome, &n1, &n2);
    printf("Nome: %s | Nota 1: %d | Nota 2: %d", nome, n1, n2);


    fclose(arq);


}