#include <stdio.h>

int main(){
	
	int A, B, soma, sub, mult, divis;
	
	printf("Digite um valor:\n");
	scanf("%d", &A);
	
	printf("Digite outro valor:\n");
	scanf("%d", &B);
	
	soma = A + B;
	sub = A - B;
	mult = A * B;
	divis = A / B;
	
	printf("Resultado da soma: %d \n", soma);
    printf("Resultado da subtracao: %d \n", sub);
    printf("Resultado da mult: %d \n",mult);
    printf("Resultado de divisao: %d \n", divis);
    return 0;
}
