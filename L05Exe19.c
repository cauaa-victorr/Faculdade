#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    int vetor[10];
    int i, j, numero, primo;

    numero = 101;
    i = 0;

    while (i < 10) {
        primo = 1;

        for (j = 2; j <= numero / 2; j++) {
            if (numero % j == 0) {
                primo = 0;
                break;
            }
        }

        if (primo == 1) {
            vetor[i] = numero;
            i++;
        }

        numero++;
    }

    printf("Os 10 primeiros números primos acima de 100 são:\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    
}
