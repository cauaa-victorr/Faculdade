#include <stdio.h>
#include <string.h> 
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char cpf[50], raca[20], nome[50];
    char sexo[10];
    int idade, perfil1, perfil2, perfil3, perfil4, perfil5;
    int perfil6, perfil7, perfil8, perfil9, perfil10;
    int soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0, soma5 = 0;
    int soma6 = 0, soma7 = 0, soma8 = 0, soma9 = 0, soma10 = 0;
    float peso, perct1, perct2, perct3, perct4, perct5, perct6;
    float perct7, perct8, perct9, perct10;

    for(int i = 0; i < 50; i++){
        printf("Digite seu nome completo: ");
        scanf("%[^\n]", nome);
        printf("Olá, digite seu CPF__\n");
        scanf("%s", cpf);
        printf("Informe seu sexo: M para masculino ou F para feminino.\n");
        scanf("%s", sexo);
        printf("Digite sua idade:\n");
        scanf("%d", &idade);
        printf("Informe sua raça:\n");
        scanf("%s", raca);
        printf("Informe o seu peso:\n");
        scanf("%f", &peso);
        setbuf(stdin,NULL);

            if(strcmp(raca, "preta") == 0)
            {
                perfil1++;
            }
            if(strcmp(sexo, 'F')==0){
                perfil2;
            }
            if(idade > 60){
                perfil3;
            }
            if(peso > 100){
                perfil4++;
            }
            if(strcmp(sexo, 'F')==0 && strcmp(raca, "preta") == 0){
                perfil5++;
            }
            if(strcmp(sexo, 'F')==0 && idade > 60){
                perfil6++;
            }
            if((strcmp(sexo, 'F')==0) && peso > 100){
                perfil7++;
            }
            if(strcmp(sexo, 'F')==0 && (strcmp(raca, "preta") == 0) && idade > 60){
                perfil8++;
            }
            if(strcmp(sexo, 'F')==0 && (strcmp(raca, "preta") == 0) && peso > 100 ){
                perfil9++;
            }
            if(strcmp(sexo, 'F')==0 && (strcmp(raca, "preta") == 0) && peso > 100 && idade > 60){
                perfil10++;
            }

    }
    soma1 = perfil1;
    soma2 = perfil2;
    soma3 = perfil3;
    soma4 = perfil4;
    soma5 = perfil5;
    soma6 = perfil6;
    soma7 = perfil7;
    soma8 = perfil8;
    soma9 = perfil9;
    soma10 = perfil10;

    perct1 = (perfil1 / 50 )* 100;
    perct2 = (perfil2 / 50 )* 100;
    perct3 = (perfil3 / 50 )* 100;
    perct4 = (perfil4 / 50 )* 100;
    perct5 = (perfil5 / 50 )* 100;
    perct6 = (perfil6 / 50 )* 100;
    perct7 = (perfil7 / 50 )* 100;
    perct8 = (perfil8 / 50 )* 100;
    perct9 = (perfil9 / 50 )* 100;
    perct10 = (perfil10 / 50 )* 100;

    printf("A porcentagem do pefil 1 eh de %.2f\n", perct1);
    printf("A porcentagem do pefil 2 eh de %.2f\n", perct2);
    printf("A porcentagem do pefil 3 eh de %.2f\n", perct3);
    printf("A porcentagem do pefil 4 eh de %.2f\n", perct4);
    printf("A porcentagem do pefil 5 eh de %.2f\n", perct5);
    printf("A porcentagem do pefil 6 eh de %.2f\n", perct6);
    printf("A porcentagem do pefil 7 eh de %.2f\n", perct7);
    printf("A porcentagem do pefil 8 eh de %.2f\n", perct8);
    printf("A porcentagem do pefil 9 eh de %.2f\n", perct9);
    printf("A porcentagem do pefil 10 eh de %.2f\n", perct10);


}