#include <stdio.h>

char classificar_senha(const char *senha) {
    int letraMaiuscula = 0, letraMinuscula = 0, numero = 0, caracEspecial = 0, tamanho = 0;
    
    char caracterEs[] = "@#$&*";
    
    for (int i = 0; senha[i] != '\0'; i++) {
        char c = senha[i];
        tamanho++;
        
        if (c >= 'A' && c <= 'Z') {
            letraMaiuscula = 1;
        } else if (c >= 'a' && c <= 'z') {
            letraMinuscula = 1;
        } else if (c >= '0' && c <= '9') {
            numero = 1;
        } else {
            for (int j = 0; caracterEs[j] != '\0'; j++) {
                if (c == caracterEs[j]) {
                    caracEspecial = 1;
                    break;
                }
            }
        }
    }
    
    
    int criterios = letraMaiuscula + letraMinuscula + numero + caracEspecial + (tamanho >= 8);
    
    if (criterios == 5) return 'A';
    if (criterios >= 3) return 'B';
    return 'C';
}

int main() {
    char senha[100];
    
    printf("Digite a senha: ");
    scanf("%s", senha);
    
    char nivel = classificar_senha(senha);
    printf("Sua senha eh: %c\n", nivel);
    
    return 0;
}