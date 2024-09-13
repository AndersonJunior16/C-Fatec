#include <stdio.h>

int main() {
    int i, j, soma = 0, mat[3][3];

    for (i=0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o elemento da linha %d coluna %d: \n", i + 1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    for (i=0; i < 3; i++){
            for(j = 0; j < 3; j++){
                soma += mat[i][j];
            }
    }
    printf("Soma dos elementos: %d", soma);
    return 0;
}
