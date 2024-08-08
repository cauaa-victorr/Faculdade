#include <stdio.h>

int main() {
    int aleatorio[10] = { 1, 7, 3, 10, 5, 9, 2, 8, 6, 4 };
    int valor, i;

    printf("Digite um valor entre 1 e 10: ");
    scanf("%d", &valor);

    for (i = 0; i < 10; i++) {
        if (aleatorio[i] == valor) {
            printf("O valor %d foi encontrado na posição %d do vetor aleatorio.\n", valor, i);
            
        
            
        }
    }
        printf("O valor %d não foi encontrado no vetor aleatorio.\n", valor);

   
}
