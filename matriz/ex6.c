#include <stdio.h>

int main() {
    int i, j, result = 0,
    mat[3][3], mat_dois[3][3];

    puts("Primeira matriz: ");
    for (i=0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o elemento da linha %d coluna %d: \n", i + 1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    puts("Segunda matriz:") ;   
    for (i=0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o elemento da linha %d coluna %d: \n", i + 1, j+1);
            scanf("%d", &mat_dois[i][j]);
        }
    }
    for (i=0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(mat[i][j] == mat_dois[i][j]){
                result = 0;
            }
            else{
                result = 1;
            }
        }
        
    }
    if (result == 0) {
        printf("As matrizes são idênticas");
    }
    else{
        printf("As matrizes não são idênticas");
    }
    return 0;
}
