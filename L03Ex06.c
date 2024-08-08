#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main (){
    int idade, crianca = 0, adolescente = 0;
    int jovem = 0, adulto = 0, idoso = 0, somaIdade, pessoas = 0;
    float mediaIdade;

            printf("Digite sua idade:");
            scanf("%d", &idade);

        while (idade != 0)

        {
            if (idade <= 11){
            crianca++;
            }
            if(idade <= 15){
                adolescente++;
            }
            if(idade <=20){
                jovem++;            
            }
            if(idade <=59){
                adulto++;
            }
            if(idade >= 60){
                idoso++;
            }
            
            pessoas ++;
            somaIdade += idade;

            printf("Digite sua idade ou 0 para finalizar:");
            scanf("%d", &idade);

        }
    mediaIdade = somaIdade / pessoas;

    printf("O total de pessoas foram de %d\n", pessoas);
    printf("O total de de %d crianca(s)\n", crianca);
    printf("O total de de %d adolescente (s)\n", adolescente);
    printf("O total de de %d jovem (s)\n", jovem);
    printf("O total de de %d adulto (s)\n", adulto);
    printf("O total de de %d idoso (s)\n", idoso);
    printf("A media das idades eh de %.1f (s)\n", mediaIdade);
        // não sei o que está acontecndo na somatoria da media da idade
}