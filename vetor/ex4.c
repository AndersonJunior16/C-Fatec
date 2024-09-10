#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    int i, num, resp, vet[8];

    for(i = 0;i < 8;i++) {
        printf("Digite o número %d: \n", i+1);
        scanf("%d", &vet[i]);
    }
    printf("Digite um valor para checar se há no vetor: \n");
    scanf("%d", &num);

    for(i = 0;i < 8; i++){
        if (num == vet[i]){
            resp = 0;
            break;
        }
        else{
            resp = 1;
        }
    }
    if (resp == 0) {
        printf("SIM");
    }
    else if(resp == 1){
        printf("NÃO");
    }
    return 0;
}
