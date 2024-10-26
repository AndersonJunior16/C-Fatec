#include <stdio.h>


int main() {
    int vetor[10], soma=0, media; 

    
    for (int i=0;i<10;i++) {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / 10;

    printf("Media: %d ", media);
    printf("Numeros acima da Media: ");
    
    for (int i=0;i<10;i++) {
        if (vetor[i]>media) printf("%d ", vetor[i]);
        
    }  
    
    
    return 0;
}
