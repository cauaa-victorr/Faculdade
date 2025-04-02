#include <stdio.h>

int eh_regular(int n) {
    if (n <= 0) return 0;
    
    while (n % 2 == 0) n /= 2;
    while (n % 3 == 0) n /= 3;
    while (n % 5 == 0) n /= 5;
    
    return (n == 1);
}

int main() {
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if (eh_regular(num))
        printf("%d é um número regular.\n", num);
    else
        printf("%d não é um número regular.\n", num);
    
    return 0;
}
