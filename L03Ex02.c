#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    int valorI, valorF;

    printf("Digite o valor inicial: ");
    scanf("%d", &valorI);
    printf("Digite o valor final: ");
    scanf("%d", &valorF);

    printf("O valores entre %d e %d sao:\n", valorI, valorF);

    for (int i = valorI; i <= valorF; i += 5) {
        printf("%d ", i);
    }

    return 0;
}