#include <stdio.h>
#include <string.h>

void trim(char *str) {
    int inicio = 0, fim, i;

    while (str[inicio] == ' ' || str[inicio] == '\t' || str[inicio] == '\n') {
        inicio++;
    }

    if (str[inicio] == '\0') {
        str[0] = '\0';
        return;
    }

    fim = strlen(str) - 1;
    while (fim > inicio && (str[fim] == ' ' || str[fim] == '\t' || str[fim] == '\n')) {
        fim--;
    }

    for (i = 0; i <= fim - inicio; i++) {
        str[i] = str[inicio + i];
    }
    str[i] = '\0'; 
}

int main() {
    char texto[100];

    printf("Digite uma palavra com espaços no início e no fim:\n");
    fgets(texto, sizeof(texto), stdin); 

    trim(texto); 
    printf("String alterada: \"%s\"\n", texto);

    return 0;
}
