#include <stdio.h>

int main() {
    int n, positivos=0, negativos=0, zeros=0;

    for (int i=0;i<10;i++) {
        scanf("%d", &n);

        if (n>0) positivos++;
        if (n==0) zeros++;
        if (n<0) negativos++;

    }

    printf("Positivos: %d Negativos: %d Zeros: %d", positivos, negativos, zeros);
}