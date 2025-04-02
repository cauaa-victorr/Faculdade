#include <stdio.h>

int string_para_inteiro(const char *str) {
    int resultado = 0, i = 0;

    while (str[i] != '\0') {
        resultado = resultado * 10 + (str[i] - '0'); 
        i++;
    }

    return resultado;
}

int main() {
    char numero_str[20]; 

    printf("Digite um número (apenas caracteres numéricos): ");
    scanf("%19s", numero_str); 

    int numero = string_para_inteiro(numero_str); 

    printf("Número convertido: %d\n", numero);

    return 0;
}
