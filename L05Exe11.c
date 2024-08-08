#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    int vetor[8];
    int valor, i, cont = 0;

    printf("Digite 8 valores:\n");

    for (i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor a ser procurado: ");
    scanf("%d", &valor);

    for (i = 0; i < 8; i++) {
        if (vetor[i] == valor) {
            cont++;
        }
    }

    if (cont > 0) {
        printf("O valor %d aparece %d vezes no vetor.\n", valor, contador);
    } else {
        printf("O valor %d não aparece no vetor.\n", valor);
    }

    return 0;
}
