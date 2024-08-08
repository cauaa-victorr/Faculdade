#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){

    double C, F, Chuva, mm;

    printf("Digite a temperatura em celsius:");
    scanf("%lf", &C);

    F = C * 1.8 + 32;
    
    printf("A temperatura de celsius para Fahrenheit é de %.1lf\n", F);

    printf("Quanto a medida da polegada de chuva?");
    scanf("%lf", &Chuva);

    mm = 25.4 * Chuva;

    printf("Choveu equivalente a %.2lf mm\n", mm);

    return 0;

}