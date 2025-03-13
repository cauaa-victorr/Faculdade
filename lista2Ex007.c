#include <stdio.h>
#include <locale.h>
#include <math.h>

int num;

int verificar_primo(int num){
    if(num % 2 == 0){
        printf("É primo!");
    }else{
        printf("Não é primo!");
    }
}

int main(){
    
    printf("Digite um numero\n");
    scanf("%d", &num);
    verificar_primo(num);
    
}