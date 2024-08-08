#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){

    int bytes, bits;

    setlocale( LC_ALL, "");

    printf("Quantos bytes são?");
    scanf("%d", &bytes);

    bits = 8 * bytes;

    printf("O valor de %d bytes, será de %d bits\n", bytes, bits);


 return 0;


}