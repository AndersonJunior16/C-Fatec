#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[20], copia[20];
    int i, tam, diferentes, iguais = 0, j = 0;

    fgets(palavra, 20, stdin);
    setbuf(stdin, NULL);
    palavra[strlen(palavra) -1] = '\0';

    for (i = 0;i < strlen(palavra); i++){
        if (palavra[i] != '!' && palavra[i] != '?' && palavra[i] != '.' && palavra[i] != ' '){
            copia[j++] = palavra[i];
        }
    }
    copia[j] = '\0';


    tam = strlen(copia);
    tam--;
    for (i = 0;i < strlen(copia); i++){
        if (copia[i] != copia[tam]){
            diferentes++;
        }
        tam--;
    }

    if (diferentes == 0){
        printf("Sim");
    }
    else{
        printf("Não");
    }

    return 0;
}

