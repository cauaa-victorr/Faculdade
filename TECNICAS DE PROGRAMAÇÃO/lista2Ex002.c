#include <stdio.h>
#include <math.h>

double pi = 3.14, R, V;

double calcular_raio(double R) { 
    return R * R * R; 

}

double calcular_volume(double R){

    return ((4*pi)/3)* calcular_raio(R);

}
 int main(void){
    printf("Digite o raio\n");
    scanf("%lf", &R);

    V  = calcular_volume(R);

    printf("O volume será: %.2lf\n", V);

    return 0;
 }