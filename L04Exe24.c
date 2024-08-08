#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main (){
    int raca, brancas = 0, pretas = 0, qtdPess = 0, idade, idadeI;
    int somaBr = 0, somaPr = 0, indigenas = 0, somaIn = 0, somaIdI = 0;
    float porcentoP, mediaInd;

    for (int i = 0; i <= 10; i++){
        
        printf("Digite sua idade:\n");
        scanf("%d", &idade);
        printf("Digite sua raça:\n");
        printf("B para Pessoas Brancas.\n");
        printf("P para pessoas pretas.\n");
        printf("I para pessoas indigenas.\n");
        scanf(" %c", &raca);


        if (raca == 'B'){
            brancas++;
        }
        if (raca == 'P'){
            pretas++;

        }
        if (raca == 'I'){
            indigenas++;
            idadeI++;
        
        }


    } 
        somaBr += brancas;
        somaPr += pretas;
        porcentoP = somaPr*100 / 10;
        somaIn += indigenas;
        somaIdI += idadeI;
        mediaInd = somaIdI/indigenas;

    printf("A Quantidade de pessoas Brancas eh de %d\n", somaBr);
    printf("A porcentagem de pessoas Pretas eh de %.2f\n", porcentoP);
    printf("A media da idade das pessoas indigenas eh de %.2f\n", mediaInd);
}