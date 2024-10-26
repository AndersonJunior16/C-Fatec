#include <stdio.h>

int maior(int n1, int n2) {
    if(n1>=n2) return n1;
    if(n2>=n1) return n2;
}


int main() {
    int n1,n2;

    scanf("%d", &n1);
    scanf("%d", &n2);

    printf("O maior: %d", maior(n1, n2));
    
    return 0;
}