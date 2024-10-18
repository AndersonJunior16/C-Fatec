#include <stdio.h>

int main() {
    int a, n, i, j;

    printf("Digite o número de andares (de 1 à 100): ");
    scanf("%d", &a);
    
    printf("Digite a quantidade de números: ");
    scanf("%d", &n);
    
    int numeros[n];

    printf("Digite os %d números: ", n);
    for (i = 0;i < n; i++) {
        scanf("%d", &numeros[i]);
    }
    
   
    char portas[a][4]; 
    for(i = 0; i < a; i++) {
        for (j = 0; j < 4; j++) {
            portas[i][j] = 'C'; 
        }
    }

    for (i = 0; i < n; i++) {
        int numero = numeros[i];
    
        for(int andar = 0; andar < a; andar++) {
            for (int apt = 0; apt < 4; apt++) {
                int num_apt = (andar + 1) * 10 + (apt + 1); 
                if (num_apt % numero == 0) {
                    portas[andar][apt] = (portas[andar][apt] == 'C') ? 'O' : 'C';
                }
            }
        }
    }

    printf("\nEstado final das portas:\n");
    for (i = 0; i < a; i++) {
        printf("Andar %d: ", i + 1);
        for(j = 0; j < 4; j++) {
            printf("%c ", portas[i][j]);
        }
        printf("\n");
    }

    return 0;
}
