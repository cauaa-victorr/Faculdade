#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int qtdAtle, pesoN = 0;
    double media, peso, pesoT;
    char equipe[50];

    printf("\nDigite o nome da equipe:\n");
    scanf("%s", &equipe);
    printf("Qual a quantidade de atletas na equipe?\n");
    scanf("%d", &qtdAtle);
    
    
    for (int i = 1; i <= qtdAtle; i++)
    {
        printf("Qual e o peso de cada atleta?\n");
        scanf("%d", &peso);

        pesoT  += peso;
 }

        media = (qtdAtle * pesoT) / 2;

        printf("A media dos eh de : %d\n", media); 

        if (peso <= 50){
            printf(" A quantidade  de atletas com peso < 50 foi de %d", pesoN++);
        }
}