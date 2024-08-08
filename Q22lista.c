#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main (){

setlocale( LC_ALL, "portugese");

double peso, altura, IMC;

printf("Digite o seu peso e a sua altura:");
scanf("%lf%lf", &peso, &altura);

IMC = peso / pow(altura,2);

printf("O seu IMC eh de %.1lf\n", IMC);

return 0;
}