#include <stdio.h>
#include <locale.h>
#include <math.h>

int n;
long resultado;

int calcular_fatorial(int fatorial){
        resultado = 1;
        for (int i = n; i >= 1; i--) {
            resultado = resultado * i;
        }
        return resultado;
}

int main(){
    while(n){
        printf("Digite um valor inteiro não negativo\n");
        scanf("%d", &n);
        resultado = fatorial(n);
        printf(" %d ! = %d ", n, resultado);

    }
}