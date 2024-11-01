#include <stdio.h>

int main()
{
    char palavra[20];
    int i = 0, j = 0;

    fgets(palavra, 20, stdin);

    while (palavra[i] != '\0') {
        if (palavra[i] != ' ') {
            palavra[j] = palavra[i];
            j++;
        }
        i++;
    }
    palavra[j] = '\0';

    printf("%s", palavra);

    return 0;
}
