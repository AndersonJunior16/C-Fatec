#include <stdio.h>
#include <string.h>

void inverter (char vet[]){
    int tamanho = strlen(vet);

    for (int i = 0; i < tamanho/2; i++){
        char temporario = vet[i];
        vet[i ]= vet[tamanho-i-1];
        vet[tamanho-i-1] = temporario;
    }
}

int main (){
    char vet[50];

    printf("Digite a frase: ");
    scanf("%s", vet);

    inverter(vet);
    printf("%s", vet);

    return 0;

}