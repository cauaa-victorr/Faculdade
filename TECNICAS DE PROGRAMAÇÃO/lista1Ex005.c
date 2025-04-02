#include <stdio.h>


void desenha_retangulo(int linhas, int colunas, char borda, char espaco) {
    for (int i = 0; i < linhas; i++) { 
        for (int j = 0; j < colunas; j++) { 
            if (i == 0 || i == linhas - 1) {
                printf("%c", borda);
            }
            else {
                if (j == 0 || j == colunas - 1) {
                    printf("%c", borda);
                } else {
                    printf("%c", espaco);
                }
            }
        }
        printf("\n");
    }
}

int main() {
    desenha_retangulo(5, 15, '#', '-');

    return 0;
}
