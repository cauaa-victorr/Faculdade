#include <stdio.h>
#include <ctype.h>

int uma_consoante(char c) {
    c = tolower(c);
    return (c >= 'a' && c <= 'z' && !strchr("aeiou", c));
}

int main() {
    printf("%d\n", uma_consoante('b'));
    return 0;
}
