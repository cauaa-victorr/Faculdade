#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main (){
    int idade, menor21, idade50, pessoas;
    char nome[25];
    float peso, mediaId, mediaPeso, somaId, peso50;

    printf("Digite a idade p/ continuar ou -1 para finalizar... ");
    scanf("%d", &idade);

    while( idade != -1){
        printf("Digite seu nome:\n");
        scanf("%s", &nome);
        printf("Digite o peso:\n");
        scanf("%f", &peso);

        if (idade <= 21){
            menor21++;
        }
        if (idade >= 50){
            idade50++;
            peso50++;
        }
        mediaPeso = idade50/peso;
        idade++;
        somaId += idade;
        pessoas++;

        printf("Digite a idade p/ continuar ou -1 para finalizar... ");
        scanf("%d", &idade);

    }
    mediaId = somaId/pessoas;
    mediaPeso = idade50/peso50;

    printf("O toltal de pessoas com 21 anos eh de %d\n", menor21);
    printf("A media das idades sao de %f\n", mediaId);
    printf("O peso media das pessoas de 50 anos eh de %.1f\n", mediaPeso);


}