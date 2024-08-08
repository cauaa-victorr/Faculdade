#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "");
	
	int Temp, Vel;
	float litU, distancia;
	
	printf("Digite o tempo gastona viagem:\n");
	scanf("%d", &Temp);
	printf("Qual foi a velocidade média:\n");
	scanf("%d", &Vel);
	
	distancia = (Temp*Vel);
	litU = distancia/12;
	
	printf("\nA velocidade média do carro foi de %d", Vel);
	printf("\nOtempo gasto foi de %d", Temp);
	printf("\nA distancia percorrida foi de %d", distancia);
	printf("\nA quantidade de litros foi de %.2f ", litU);
	
	return 0;
}
	
