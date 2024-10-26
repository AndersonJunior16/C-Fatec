#include <stdio.h>

void inverte_string(int comprimento, char vetor[comprimento]) {
    for (int i = comprimento - 1; i >= 0; i--) {
        printf("%c", vetor[i]);
    }
}


int main() {
    char vetor[4]; 

    for (int i = 0; i < 4; i++) {
        scanf(" %c", &vetor[i]);
    }
    
    inverte_string(4, vetor);
    
    return 0;
}