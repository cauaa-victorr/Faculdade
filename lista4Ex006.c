#include <stdio.h>

void trocar_casos(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
        i++;
    }
}

int main() {
    char texto[100];

    printf("Digite uma string: ");
    scanf("%99[^\n]", texto);

    trocar_casos(texto);

    printf("String alterada: %s\n", texto);

    return 0;
}
