#include <stdio.h>

int main() {
    int i, j, k, l, temp, n, result = 0,
    mat[3][3];

    puts("Digite o tamanho da matriz: (NxN)");
    scanf("%d", &n);


    puts("Digite a matriz: ");
    for (i=0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Digite o elemento da linha %d coluna %d: \n", i + 1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    
    int total = n * n;
    
    for (i = 0;i < total - 1;i++) {
        
        for(j = 0; j < total - i - 1; j++) {
            int linhaAtual = j / n;
            int colunaAtual = j % n;
            int linhaProx = (j + 1) / n;
            int colunaProx = (j + 1) % n;
            
            if (mat[linhaAtual][colunaAtual] > mat[linhaProx][colunaProx]) {
                int temp = mat[linhaAtual][colunaAtual];
                mat[linhaAtual][colunaAtual] = mat[linhaProx][colunaProx];
                mat[linhaProx][colunaProx] = temp;
            }
        }
    }

   
   for (i = 0; i < n; i++){
       for (j = 0; j < n; j++){
           printf("%d ", mat[i][j]);
       }
       printf("\n");
   }
   
    return 0;
}