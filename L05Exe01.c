#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main (){

    int num[10];

        printf("Digite 10 numeros:\n");
        for (int i = 0; i < 10; i++){
            scanf("%d", &num[i]);
        }
        for (int i = 9; i >= 0; i--){
            printf("[%d]\n", num[i]);
        }
}