#include <stdio.h>
#include <math.h>
long long int fibonacci(int i) {
    if (i == 0) return 0;  // Primeiro termo
    if (i == 1) return 1;  // Segundo termo
    return fibonacci(i - 1) + fibonacci(i - 2); 
}

int main() {
    int n;

    printf("Digite o valor de i (índice do termo de Fibonacci): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: O índice deve ser um número inteiro não negativo.\n");
        return 1;
    }

    printf("O %dº termo da sequência de Fibonacci é: %lld\n", n, fibonacci(n));

    return 0;
}
