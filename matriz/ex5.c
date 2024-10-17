#include <stdio.h>

int main() {
    int i, j, k, 
    mat[2][2], mat_dois[2][2], result[2][2];

    puts("Primeira matriz: ");
    for (i=0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Digite o elemento da linha %d coluna %d: \n", i + 1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    puts("Segunda matriz:") ;   
    for (i=0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Digite o elemento da linha %d coluna %d: \n", i + 1, j+1);
            scanf("%d", &mat_dois[i][j]);
        }
    }
    
    for (i=0; i < 2; i++){
        for(j = 0; j < 2; j++){
            for (int k = 0; k < 2; k++) {
                result[i][j] += mat[i][k] * mat_dois[k][j];
            }
        }
    }
    for (i=0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf(" %d ", result[i][j]);
        }
    printf("\n");
    }
    
    return 0;
}