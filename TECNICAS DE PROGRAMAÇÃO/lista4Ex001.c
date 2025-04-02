#include <stdio.h>

int contar_caracteres(const char *str) {
    int count = 0;
    
    while (str[count] != '\0') { 
        count++;
    }

    return count;
}

int main() {
    char texto[100];

    printf("Digite uma palavra ou frase:\n");
    scanf("%99[^\n]", texto); 

    int quantidade = contar_caracteres(texto);

    printf("Existe %d caracteres.\n", quantidade);

    return 0;
}
