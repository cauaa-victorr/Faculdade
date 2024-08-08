#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main (){
    int numero, maior = 0;

    printf("Digite um numero:");
    scanf("%d", &numero);

        while (numero != 0)
        {
            if( numero > maior){
                maior =  numero;
            }
        printf("Digite um numero:");
        scanf("%d", &numero);   

        }
    printf("O numero maior eh : %d\n", maior);    
        
}