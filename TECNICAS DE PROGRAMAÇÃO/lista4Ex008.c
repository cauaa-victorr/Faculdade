#include <stdio.h>
#include <string.h>

int encontrar_substring(const char *str1, const char *str2) {
    int i, j, len1 = strlen(str1), len2 = strlen(str2);

    for (i = 0; i <= len1 - len2; i++) {
        for (j = 0; j < len2; j++) {
            if (str1[i + j] != str2[j]) {
                break;
            }
        }
        if (j == len2) {
            return i;
        }
    }

    return -1;
}

int main() {
    char str1[100], str2[50];
    int indice;

    printf("Digite a primeira string: ");
    scanf("%99[^\n]", str1);
    getchar();
    printf("Digite a segunda string: ");
    scanf("%49[^\n]", str2);

    indice = encontrar_substring(str1, str2);

    if (indice != -1) {
        printf("Índice da primeira ocorrência: %d\n", indice);
    } else {
        printf("Substring não encontrada.\n");
    }

    return 0;
}
