#include <stdio.h>
#include <math.h>

double log_base(double a, double b) {
    return log(a) / log(b);
}

int main() {
    double a, b, resultado;


    printf("Digite o logaritmando (a): ");
    scanf("%lf", &a);
    
    printf("Digite a base do logaritmo (b): ");
    scanf("%lf", &b);

    if (a <= 0 || b <= 0 || b == 1) {
        printf("Erro: O logaritmando e a base devem ser positivos, e a base não pode ser 1.\n");
        return 1;
    }

    resultado = log_base(a, b);

    printf("O logaritmo de %.2lf na base %.2lf é: %.6lf\n", a, b, resultado);

    return 0;
}
