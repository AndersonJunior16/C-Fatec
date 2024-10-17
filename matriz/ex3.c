#include <stdio.h>

int main() {
    int i, j, n;
    n = 3;
    int mat[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Digite o elemento da linha %d coluna %d: \n", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("%d ", mat[i][j]);
            } else {
                printf("  "); 
            }
        }
        printf("\n"); 
    }

    return 0;
}