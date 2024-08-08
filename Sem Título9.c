#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	char alunoN [100];
	int media;
	float N1 = 2;
	float N2 = 3;
	
	printf("Informe o nome do aluno \n");
	scanf("%s",alunoN);
	
	printf("Informe a primeira nota que o aluno obteve. \n");
	scanf("%f", N1);
	
	printf("Informe a segunda nota. \n");
	scanf("%f", N2);
	
	media = N1 + N2;
	media = media / 2;
	
	printf("O aluno %s obteve Media %f.", alunoN ,media);
	
	return 0;
}
