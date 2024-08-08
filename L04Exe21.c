#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main (){

    int codigo;
    float valor, totalCod, valor1 = 0, valor2 = 0, valor3 = 0;
    float valorT1, valorT2, valorT3;

    printf("\n  Olá digite o código da mercadoria desejada, ou 0 para finalizar. \n");
    printf("Codigo 1 para limpeza\n");
    printf("Codigo 2 para alimentação\n");
    printf("Codigo 3 para higiene\n");
    scanf("%d", &codigo);

    while(codigo != 0){
        if(codigo == 1){
            printf("digite o valor do produto: R$__");
            scanf("%f", &valor1);
            valor1++;
            valorT1 += valor1;
        }
        if (codigo == 2){
            printf("digite o valor do produto: R$__");
            scanf("%f", &valor2);
            valor2;
            valorT2 += valor2;            
        }
        if(codigo == 3){
            printf("digite o valor do produto: R$__");
            scanf("%f", &valor3);
            valor3;
            valorT3 += valor3;

        }
       
       
        totalCod = valorT1 + valorT2 + valorT3;

        printf("\n  Olá digite o código da mercadoria desejada, ou 0 para finalizar. \n");
        printf("Codigo 1 para limpeza\n");
        printf("Codigo 2 para alimentação\n");
        printf("Codigo 3 para higiene\n");
        scanf("%d", &codigo);
    } 

    printf("O total vendido de todas as mercadoria eh de R$ %.2f\n", totalCod);
    printf("O total vendido na mercadoria de limpeza foi de R$ %.2f\n", valor1);
    printf("O total vendido na mercadoria de alimentção foi de R$ %.2f\n", valor2);
    printf("O total vendido na mercadoria de higiene foi de R$ %.2f\n", valor3);

}