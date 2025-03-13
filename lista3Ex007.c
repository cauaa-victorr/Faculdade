#include <stdio.h>
#include <ctype.h>
#include <string.h>

void para_minusculas(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

void para_maiusculas(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}

void caixa_com_texto_centralizado(char *s, int n, char c) {
    int len = strlen(s);
    if (len > n - 2) len = n - 2;
    int pad = (n - 2 - len) / 2;
    int extra = (n - 2 - len) % 2;
    
    for (int i = 0; i < n; i++) printf("%c", c);
    printf("\n");
    printf("%c%*s%.*s%*s%c\n", c, pad, "", len, s, pad + extra, "", c);
    for (int i = 0; i < n; i++) printf("%c", c);
    printf("\n");
}

int main() {
    char str1[] = "HELLO World 123!";
    para_minusculas(str1);
    printf("%s\n", str1);
    
    char str2[] = "hello world 123!";
    para_maiusculas(str2);
    printf("%s\n", str2);
    
    caixa_com_texto_centralizado("Ola Mundo!", 30, '+');
    
    return 0;
}
