#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[20];
    
    fgets(palavra, 20, stdin);
    palavra[strlen(palavra) -1] = '\0';
    
    printf("%d", strlen(palavra));
    
    return 0;
}
