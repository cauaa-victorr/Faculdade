#include <stdio.h>

//Cauã Victor, Gustavo Pinto, Jennifer Vitória


void contarLetras(const char *texto, int *alfa) {
    for (int i = 0; i < 26; i++) {
        alfa[i] = 0;
    }

    while (*texto) {
        if ((*texto >= 'A' && *texto <= 'Z') || (*texto >= 'a' && *texto <= 'z')) {
            char maiuscula = *texto;
            alfa[maiuscula - 'A']++;
        }
        texto++;
    }
}

void imprimirResultado(const int *alfa) {
    for (int i = 0; i < 26; i++) {
        if (alfa[i] > 0) {
            printf("%c: %d\n", 'A' + i, alfa[i]);
        }
    }
}

int main() {
    char texto[1000];
    int alfa[26];

    printf("Digite um texto: ");
    scanf("%s[^\n]", texto);

    contarLetras(texto, alfa);
    imprimirResultado(alfa);

    return 0;
}
