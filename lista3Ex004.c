#include <stdio.h>

int eh_perfeito(int n) {
    int soma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) soma += i;
    }
    return soma == n;
}

void imprimir_numeros_perfeitos() {
    for (int i = 1; i <= 10000; i++) {
        if (eh_perfeito(i)) {
            printf("%d=", i);
            int soma = 0;
            for (int j = 1; j < i; j++) {
                if (i % j == 0) {
                    printf("%d%s", j, soma + j == i ? "\n" : "+");
                    soma += j;
                }
            }
        }
    }
}

int main() {
    imprimir_numeros_perfeitos();
    return 0;
}
