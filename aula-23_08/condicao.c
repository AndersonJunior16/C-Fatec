int main() {
    int idade = 50;

    if (idade >= 18) {
        printf("maior de idade. \nx");
    } else {
        printf("menor de idade \n");
    }

    int nota = 8;

    if (nota < 6) {
        printf("Precisa melhorar");
    } else if (nota > 6 && nota < 8) {
        printf("Esta indo bem");
    } else if (nota >= 8) {
        printf("Super bem");
    }
    return 0;

}
