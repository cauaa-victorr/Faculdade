#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){

    int tempo, velocM;
    float dist, listrosU;

    setlocale( LC_ALL, "");

    printf("Qual foi o tempo gasto na viagem?");
    scanf("%d", &tempo);
    printf("Qual foi a velocidade média do carro?");
    scanf("%d", &velocM);

    dist = tempo*velocM;
    listrosU = dist/12;

    printf("A velocidade média do carro foi de %d\n", velocM);
    printf("O tempo gasto na viagem foi de %d\n", tempo);
    printf("A distancia percorrida foi de %.2f\n", dist);
    printf("A quantidade de litros usados foi de %.2f\n", listrosU);

    return 0;
}


    

    