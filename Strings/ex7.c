#include <stdio.h>
#include <string.h>

#define ALUNOS 5


int main() {
    char nomes[ALUNOS][50];

    for (int i = 0; i < ALUNOS; i++) {
        fgets(nomes[i], 50, stdin);
        setbuf(stdin, NULL);
        nomes[i][strlen(nomes[i]) -1] = '\0';
    }

    printf("Nomes em ordem inversa: ");
    for (int i = ALUNOS - 1; i >= 0; i--) {
        printf("%s ", nomes[i]);
    }

    return 0;
}
