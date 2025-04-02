#include <stdio.h>
#include <string.h>

char* concatenar_strings(const char *str1, const char *str2) {
    int tamanho1 = strlen(str1);
    int tamanho2 = strlen(str2);
    
    char *resultado = (char*) malloc((tamanho1 + tamanho2 + 1) * sizeof(char));

    if (resultado == NULL) {
        printf("Erro.\n");
        exit(1);
    }

    strcpy(resultado, str1);

    strcat(resultado, str2);

    return resultado;
}

int main() {
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    scanf("%99s", str1);

    printf("Digite a segunda string: ");
    scanf("%99s", str2);

    char *concatenada = concatenar_strings(str1, str2);

    printf("String concatenada: \"%s\"\n", concatenada);


    free(concatenada);

    return 0;
}
