#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[20];
    char palavra_dois[20];

    fgets(palavra, 20, stdin);
    setbuf(stdin, NULL);
    fgets(palavra_dois, 20, stdin);
    setbuf(stdin, NULL);

    palavra[strlen(palavra) -1] = '\0';
    palavra_dois[strlen(palavra_dois) -1] = '\0';

    printf("%d", strcmp(palavra, palavra_dois));

    return 0;
}

