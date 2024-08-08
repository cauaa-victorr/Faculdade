#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main (){
    int tipoT, codigo, nPulsos, nDesp;
    char nome [100];
    float totalC1, totalC2, somaT1 =0, somaT2 = 0, media1, media2;

    printf("Olá, digite o codigo da sua assinatura ou 0 para finalizar:\n");
    scanf("%d", &codigo);

    while(codigo != 0){
        printf("Olá, digite seu nome:.......\n");
        scanf("%s", &nome);
        printf("Informe o tipo da sua linha telefonica:\n");
        printf("Codigo 1 - Telefone Residencial\n");
        printf("codigo 2 - Telefone Comercial\n");
        scanf("%d", &tipoT);
        printf("Informe o número de pulsos para chamadas locais:\n");
        scanf("%d", &nPulsos);
        printf("Informe a quantidade do serviço de despertador:\n");
        scanf("%d", &nDesp);

        if (tipoT == 1){
            totalC1 = 23.00 + nPulsos * 0.10 + nDesp * 0.47;
            totalC1++;
            printf("%s o total da sua conta de R$ %.2f\n", nome, totalC1);
        }
        if (tipoT == 2){
            totalC2 = 30.00 + nPulsos * 0.10 + nDesp * 0.47;
            totalC2++;    
            printf("%s o total da sua conta eh de R$ %.2f\n", nome, totalC2);
        }
        printf("Olá, digite o codigo da sua assinatura ou 0 para finalizar:\n");
        scanf("%d", &codigo);
    }
    somaT1 += totalC1;
    somaT2 += totalC2;
    media1 = somaT1/30;
    media2 = somaT2/30;



    printf("O valor arrecado em media por mes do Tipo 1 um eh de %.2f\n", media1);
    printf("O valor arrecado em media por mes do Tipo 2 um eh de %.2f\n", media2);



}