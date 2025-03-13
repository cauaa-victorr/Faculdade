#include <stdio.h>
#include <math.h>

double pi = 3.14, A, R;

double calcular_area(double R) { 
    return pi * R * R; 
}

int main(void) {
    printf("Digite o valor do Raio: ");
    scanf("%lf", &R);

    A = calcular_area(R); 

    printf("A área do círculo é: %.2lf\n", A); 
    
    return 0;
}
