#include <stdio.h>
#include <string.h>

#define ALUNOS 5
void bubbleSort(char nomes[ALUNOS][50]);

int main() {
    char nomes[ALUNOS][50];

    for (int i = 0; i < ALUNOS; i++) {
        scanf("%s", nomes[i]);
    }

    bubbleSort(nomes);


    printf("Lista de nomes ordenados: ");
    for (int i = 0; i < ALUNOS; i++) {
        printf("%s ", nomes[i]);
    }

    return 0;
}

void bubbleSort(char nomes[ALUNOS][50]) {
    for (int i = 0; i < ALUNOS - 1; i++) {
        for (int j = 0; j < ALUNOS - 1 - i; j++) {
            if (strcmp(nomes[j], nomes[j + 1]) > 0) {
                char temp[05];
                strcpy(temp, nomes[j]);
                strcpy(nomes[j], nomes[j + 1]);
                strcpy(nomes[j + 1], temp);
            }
        }
    }
}
