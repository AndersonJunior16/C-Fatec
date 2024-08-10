#include<stdio.h>

#define PI 3.14
#define VAL 5

int idade = 28;
float altura = 1.89;
float premiomegasena = 9000000;
char sexo = 'M';
// comentario

int main() {
  //printf("Hello World!\n");
  //printf("Sua idade e: %d \n", idade);
  //printf("Sua altura e: %f - Sexo: %c \n", altura, sexo);

  int nota1;

  printf("Digite sua nota: ");
  scanf("%d", &nota1);

  printf("Sua nota 1 e: %d", nota1);

  return 0;
}
