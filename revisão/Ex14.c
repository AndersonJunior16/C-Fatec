#include <stdio.h>


int main() {
    int n; 

    
    scanf("%d", &n);
    
    if (n%3==0) {
        printf("Divisivel por 3");
    } else if (n%5==0) {
        printf("Divisivel por 5");
    } else if (n%3==0 && n%5==0) {
        printf("Divisivel por 3 e 5");
    }   
    
    
    return 0;
}