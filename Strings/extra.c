#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    char *pt;

    fgets(palavra, 50, stdin);
    setbuf(stdin, NULL);
    palavra[strlen(palavra) -1] = '\0';

    pt = strtok(palavra, " ");
    while(pt){
        printf("%s\n", pt);
        pt = strtok(NULL, " ");
    }

    return 0;
}
