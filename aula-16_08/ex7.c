    #include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    int num, exp;

    scanf("%d %d", &num, &exp);
    int result = (int)pow(num, exp);

    printf("%d^%d = %d", num, exp, result);
    return 0;
}
