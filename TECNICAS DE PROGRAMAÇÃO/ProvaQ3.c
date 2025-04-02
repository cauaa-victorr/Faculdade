#include <stdio.h>

int* filtrar_intervalo(int *V, int N, int A, int B, int *novo_tamanho) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (V[i] >= A && V[i] <= B) count++;
    }
    
    int *novo_vetor = (int*)malloc(count * sizeof(int));
    if (!novo_vetor) return NULL;
    
    int j = 0;
    for (int i = 0; i < N; i++) {
        if (V[i] >= A && V[i] <= B) novo_vetor[j++] = V[i];
    }
    
    *novo_tamanho = count;
    return novo_vetor;
}

int main() {
    int N, A, B;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);
    
    int *V = (int*)malloc(N * sizeof(int));
    if (!V) return 1;
    
    printf("Digite os %d elementos do vetor: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &V[i]);
    }
    
    printf("Digite A e B: ");
    scanf("%d %d", &A, &B);
    
    int novo_tamanho;
    int *filtrado = filtrar_intervalo(V, N, A, B, &novo_tamanho);
    
    printf("Vetor filtrado: ");
    for (int i = 0; i < novo_tamanho; i++) {
        printf("%d ", filtrado[i]);
    }
    printf("\n");
    
    free(V);
    free(filtrado);
    return 0;
}
