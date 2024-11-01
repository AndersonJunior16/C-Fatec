#include <stdio.h>
#include <string.h>

int main() {
    char palavraPrincipal[50];
    char palavraSubstring[50];

    fgets(palavraPrincipal, 50, stdin);
    palavraPrincipal[strlen(palavraPrincipal) - 1] = '\0';
    setbuf(stdin, NULL);

    fgets(palavraSubstring, 50, stdin);
    palavraSubstring[strlen(palavraSubstring) - 1] = '\0';
    setbuf(stdin, NULL);

    char *resultado = strstr(palavraPrincipal, palavraSubstring);

    if (resultado) {
        int posicao = resultado - palavraPrincipal;
        printf("Substring encontrada na posição: %d\n", posicao);
    } else {
        printf("Substring não encontrada.\n");
    }

    return 0;
}
