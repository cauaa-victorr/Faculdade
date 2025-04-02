#include <stdio.h>
#include <locale.h>


void linhaAsteriscos(int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("*");
    }
    printf("\n"); 
}
void linhaArrobas(int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("@");
    }
    printf("\n");
}
void linhaMais(int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("+");
    }
    printf("\n");
}

int main() {
    setlocale(LC_ALL, "pt_BR.utf8");

    int tamanho = 25; 
    
    linhaAsteriscos(tamanho);
    printf("CMP 1048\n");
    linhaArrobas(tamanho);
    printf("Técnicas de Programação\n");
    linhaMais(tamanho);

    return 0;
}
