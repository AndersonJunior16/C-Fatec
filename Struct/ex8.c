#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 3

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct{

    char nome[50];
    int quarto;
    Data check_in;
    Data check_out;

} Reserva;

int  dias_totais(Data data);
int calc_dias(Data inicio, Data fim);
void armazenar_reserva(Reserva *reserva);
void imprimir_reserva(Reserva reserva);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i;

    Reserva reserva[TAM];

    for (i = 0; i < TAM; i++){
        printf("----Reserva %d----\n", i +1);
        armazenar_reserva(&reserva[i]);
        system("cls");
    }
    
    system("cls");
    printf("\nDados de reserva:\n");
    for (i = 0; i < TAM; i++){
        printf("Reserva %d:\t", i + 1);
        imprimir_reserva(reserva[i]);

    }

    
    return 0;
}

int  dias_totais(Data data){
    return data.dia + (data.mes - 1) * 31 + data.ano * 365;
}

int calc_dias(Data inicio, Data fim){
    return dias_totais(fim) - dias_totais(inicio);
}

void armazenar_reserva(Reserva *reserva){

    printf("Nome: ");
    fgets(reserva->nome, 50, stdin);
    setbuf(stdin, NULL);
    reserva->nome[strlen(reserva->nome) -1] = '\0';
    
    printf("Quarto: ");
    scanf("%d", &reserva->quarto);
    setbuf(stdin, NULL);

    printf("Data de Check-in");
    printf("\nDia: ");
    scanf("%d", &reserva->check_in.dia);
    setbuf(stdin, NULL);
    printf("Mês: ");
    scanf("%d", &reserva->check_in.mes);
    setbuf(stdin, NULL);
    printf("Ano: ");
    scanf("%d", &reserva->check_in.ano);
    setbuf(stdin, NULL);
    
    printf("\n\nData de Check-out");
    printf("\nDia: ");
    scanf("%d", &reserva->check_out.dia);
    setbuf(stdin, NULL);
    printf("Mês: ");
    scanf("%d", &reserva->check_out.mes);
    setbuf(stdin, NULL);
    printf("Ano: ");
    scanf("%d", &reserva->check_out.ano);
    setbuf(stdin, NULL);


}

void imprimir_reserva(Reserva reserva){

    int dias = calc_dias(reserva.check_in, reserva.check_out);
    printf("Nome: %s\tQuarto: %d\tCheck-in: %02d/%02d/%d\tCheck-out: %02d/%02d/%d\tDuração: %d\n\n", reserva.nome, reserva.quarto, reserva.check_in.dia, reserva.check_in.mes, reserva.check_in.ano, reserva.check_out.dia, reserva.check_out.mes, reserva.check_out.ano, dias);

}