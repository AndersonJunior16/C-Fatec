#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[20];
    char palavra_dois[20];

    fgets(palavra, 20, stdin);
    setbuf(stdin, NULL);
    palavra[strlen(palavra) -1] = '\0';

    strcpy(palavra_dois, palavra);

    printf("%s", palavra_dois);

    return 0;
}


