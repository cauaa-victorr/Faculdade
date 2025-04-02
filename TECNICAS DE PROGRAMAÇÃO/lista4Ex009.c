#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* soma_numeros_gigantes(const char *num1, const char *num2) {
    int len1 = strlen(num1), len2 = strlen(num2);
    int max_len = len1 > len2 ? len1 : len2;
    int carry = 0, i, j, k = 0;
    
    char *resultado = (char*) malloc((max_len + 2) * sizeof(char));

    for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--) {
        int dig1 = (i >= 0) ? num1[i] - '0' : 0;
        int dig2 = (j >= 0) ? num2[j] - '0' : 0;
        int soma = dig1 + dig2 + carry;

        resultado[k++] = (soma % 10) + '0';
        carry = soma / 10;
    }

    resultado[k] = '\0';
    
    for (i = 0, j = k - 1; i < j; i++, j--) {
        char temp = resultado[i];
        resultado[i] = resultado[j];
        resultado[j] = temp;
    }

    return resultado;
}

int main() {
    char num1[100], num2[100];
    char *resultado;

    printf("Digite o primeiro número: ");
    scanf("%99s", num1);
    printf("Digite o segundo número: ");
    scanf("%99s", num2);

    resultado = soma_numeros_gigantes(num1, num2);

    printf("Resultado da soma: %s\n", resultado);

    free(resultado);

    return 0;
}
