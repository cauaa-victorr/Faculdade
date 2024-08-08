#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){
    int horas, dataGr, pacotes;

     setlocale( LC_ALL, "");

    printf("Quantas horas voce está conectado?");
    scanf("%d", &horas);

    dataGr= 30*horas;
    pacotes = dataGr/3;

    printf("A quantidade de pacotes que trafegam nesse horário é de %d\n", pacotes);

    return 0;



}