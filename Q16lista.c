#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){

    char pessoa1, pessoa2, pessoa3 [150];
    int idade1, idade2, idade3;
    float peso1, peso2, peso3, mediaP, mediaI;




    setlocale( LC_ALL, "");

    printf("Digite o nome de 3 pessoas:");
    scanf("%s%s%s", &pessoa1, &pessoa2, &pessoa3);
    printf("Digite as idades dessas 3 pessoas:");
    scanf("%d%d%d", &idade1, &idade2, &idade3);
    printf("Informe os peso dessas 3 pessoas:");
    scanf("%f%f%f", &peso1, &peso2, &peso3);

    mediaP = (peso1+peso2+peso3) / 3;
    mediaI = (idade1+idade2+idade3) / 3;

    printf("A media de idade eh de %f\n", mediaI);
    printf("A media de peso eh de %f\n", mediaP);
    return 0;

}