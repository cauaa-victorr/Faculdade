#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main (){
    int conta, clienteM, somaC;
    char cliente[100];
    float saldo, porct;

    printf("\nOla, digite o numero da sua conta p/ continuar ou -10 p/ finalizar \n");
    scanf("%d", &conta);

    while(conta != -10){
        printf("Digite seu nome:__________\n");
        scanf("%s", &cliente);
        printf("Digite o seu saldo: R$______\n");
        scanf("%f", &saldo);

        conta++;

        if (saldo >= 500){
            printf("%s voce eh Cliente Vip\n", cliente);
        }
        if (saldo >=100 && saldo <=200){
            clienteM++;
        }

        somaC += clienteM;
        porct = somaC*0.1;

        printf("\nOla, digite o numero da sua conta p/ continuar ou -10 p/ finalizar \n");
        scanf("%d", &conta);

    }

    printf("O percentual de pessoas com saldo entre R$ 100 e 200 eh de %.2f\n", porct);



}