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

int main() {
    char str1[] = "HELLO World 123!";
    para_minusculas(str1);
    printf("%s\n", str1);
    
    char str2[] = "hello world 123!";
    para_maiusculas(str2);
    printf("%s\n", str2);
    
    return 0;
}