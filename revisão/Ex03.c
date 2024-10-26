#include <stdio.h> 

int main() {
    int notas[4], soma=0;

    for (int i=0;i<4;i++) {
        scanf("%d", &notas[i]);
        soma += notas[i];
    }

    printf("A media: %d", soma / 4);
}