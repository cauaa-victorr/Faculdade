#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "");
	
	int Va, Vn;
	float Paum;
	
	printf("Digite o valor atual:\n");
	scanf("%d",&Va);
	printf("Digite o novo valor\n");
	scanf("%d",&Vn);
	
	Paum = Vn-Va;
	Paum = Paum / Va;
	Paum = Paum * 100;
	
	printf("\nAumento de %.2f %%", Paum);
	
	
	
	
	
	
	
	
		}
