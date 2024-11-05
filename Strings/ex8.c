#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    char palavra_dois[50];

    fgets(palavra, 50, stdin);
    setbuf(stdin, NULL);
    palavra[strlen(palavra) -1] = '\0';

    fgets(palavra_dois, 50, stdin);
    setbuf(stdin, NULL);
    palavra_dois[strlen(palavra_dois) -1] = '\0';

    printf("%s ", strcat(palavra, palavra_dois));

    return 0;
}
