#include <stdio.h>

int main() {
    int vetor[3];

    for(int i=0;i<3;i++) {
        scanf("%d", &vetor[i]);
    }

    for(int i=0;i<3;i++) {
        printf("%d ", vetor[2-i]);
    }
    
    return 0;
}