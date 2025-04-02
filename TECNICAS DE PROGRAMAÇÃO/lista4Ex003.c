#include <stdio.h>

int comparar_strings(const char *str1, const char *str2) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) {
            return -1;
        } else if (str1[i] > str2[i]) {
            return 1;  
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0; 
    } else if (str1[i] == '\0') {
        return -1; 
    } else {
        return 1;  
    }
}

int main() {
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    scanf("%99s", str1);

    printf("Digite a segunda string: ");
    scanf("%99s", str2);

    int resultado = comparar_strings(str1, str2);

    if (resultado == 0) {
        printf("As strings são iguais.\n");
    } else if (resultado == -1) {
        printf("A primeira string é lexicograficamente menor.\n");
    } else {
        printf("A primeira string é lexicograficamente maior.\n");
    }

    return 0;
}
