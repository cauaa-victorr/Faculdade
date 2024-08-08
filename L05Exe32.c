#include <stdio.h>

int main() {
    int vetor[20];
    int i, j, temp;

    printf("Digite 20 valores:\n");

    for (i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 20; i++) {
        for (j = i + 1; j < 20; j++) {
            if (vetor[i] > vetor[j]) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }

    printf("Os 3 menores valores são: %d, %d e %d.\n", vetor[0], vetor[1], vetor[2]);
    printf("Os 3 maiores valores são: %d, %d e %d.\n", vetor[19], vetor[18], vetor[17]);

    
}
