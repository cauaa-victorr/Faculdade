#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** dividir_string(const char *str, char delimitador, int *quantidade) {
    int i, j, inicio = 0, count = 1;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == delimitador) {
            count++;
        }
    }

    char **resultado = (char**) malloc(count * sizeof(char*));
    *quantidade = count;

    i = 0, j = 0;
    while (str[i] != '\0') {
        if (str[i] == delimitador) {
            resultado[j] = (char*) malloc((i - inicio + 1) * sizeof(char));
            strncpy(resultado[j], str + inicio, i - inicio);
            resultado[j][i - inicio] = '\0';
            j++;
            inicio = i + 1;
        }
        i++;
    }

    resultado[j] = (char*) malloc((i - inicio + 1) * sizeof(char));
    strcpy(resultado[j], str + inicio);

    return resultado;
}

int main() {
    char string[100], caractere;
    int quantidade, i;
    char **resultado;

    printf("Digite uma string: ");
    scanf("%99[^\n]", string);
    getchar();
    printf("Digite o caractere delimitador: ");
    scanf("%c", &caractere);

    resultado = dividir_string(string, caractere, &quantidade);

    printf("Substrings resultantes:\n");
    for (i = 0; i < quantidade; i++) {
        printf("%s\n", resultado[i]);
        free(resultado[i]);
    }
    free(resultado);

    return 0;
}
