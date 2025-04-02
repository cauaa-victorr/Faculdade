#include <stdio.h>
#include <ctype.h>
#include <string.h>

void to_lower_case(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char str[] = "HELLO World 123!";
    to_lower_case(str);
    printf("%s\n", str);
    return 0;
}
