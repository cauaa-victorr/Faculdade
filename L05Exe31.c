#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    int A[5], B[5], C[5];
    int i;

    printf("Digite 10 números:\n");

    for (i = 0; i < 10; i++) {
        if (i < 5) {
            scanf("%d", &A[i]);
        } else {
            scanf("%d", &B[i - 5]);
        }
    }

    for (i = 0; i < 5; i++) {
        C[i] = A[i] - B[i];
    }

    printf("Vetor A: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", A[i]);
    }
    

    printf("Vetor B: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", B[i]);
    }
    

    printf("Vetor C: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", C[i]);
    }
    

    
}
