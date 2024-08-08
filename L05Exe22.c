#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    int vetor1[5], vetor2[5];
    int i;

    printf("Digite 5 números inteiros positivos:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor1[i]);
    }

    for (i = 0; i < 5; i++) {
        vetor2[i] = vetor1[4 - i];
    }

    printf("Vetor 1: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor1[i]);
    }
    

    printf("Vetor 2: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor2[i]);
    }
    

    
}
