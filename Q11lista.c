#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){

    int valor, resto, nt1, nt2, nt3, nt4, nt5, nt6, nt7, nt8;

    printf("Digite o valor a ser sacado:");
    scanf("%d", &valor);

    nt1 = valor/200;
    resto = valor % 200;
    nt2 = resto / 100;
    resto = nt2 % 100;
    nt3 = resto/50;
    resto = nt3 % 50;
    nt4 = resto / 20;
    resto = nt4 % 20;
    nt5 = resto / 10;
    resto = nt5 % 10;
    nt6 = resto / 5;
    resto = nt6 % 5;
    nt7 = resto / 2;
    resto = nt7 %2;
    nt8 = resto;

    printf("%d Cédulas\n", nt1);
    printf("%d Cédulas\n", nt2);
    printf("%d Cédulas\n", nt3);
    printf("%d Cédulas\n", nt4);
    printf("%d Cédulas\n", nt5);
    printf("%d Cédulas\n", nt6);
    printf("%d Cédulas\n", nt7);
    printf("%d Cédulas\n", nt8);

    return 0;
}