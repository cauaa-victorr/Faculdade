#include <stdio.h>
#include <ctype.h>

int a_vogal(char c) {
    return strchr("aeiou", c) != NULL;
}

int main() {
    printf("%d\n", a_vogal('a'));
    printf("%d\n", a_vogal('B'));
    return 0;
}
