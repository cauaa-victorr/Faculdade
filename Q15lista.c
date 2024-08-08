#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){
    int A, B, C, delta; 

    printf("Digite um valor para os coeficientes A, B,C ");
    scanf("%d%d%d", &A, &B, &C);

    delta = pow(B,2) - 4*A*C;

    printf("%d\n", delta);

    return 0;
}