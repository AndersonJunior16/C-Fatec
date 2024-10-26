#include <stdio.h>

int eh_primo(int num) {
    if (num<2) return 0;
    for (int i=2;i<num;i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n; 

    scanf("%d", &n);
    

    printf("%d", eh_primo(13));
    
    return 0;
}