#include <stdio.h>
#include <string.h>

int eh_palindromo(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) return 0;
    }
    return 1;
}

int main() {
    printf("%d\n", eh_palindromo("arara"));
    printf("%d\n", eh_palindromo("teste"));
    return 0;
}
