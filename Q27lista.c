#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main (){

setlocale( LC_ALL, "portugese");

float area, litros, valor;
int latas;

printf("Qual a medida do tamanho da area a ser pintada?");
scanf("%f", &area);

litros = area/3;
latas = litros/18;
valor = latas*80;

printf("A quantidade de latas sera de %dlatas\n", latas);
printf("O valor a ser pago eh de %.2f\n", valor);

return 0;
}