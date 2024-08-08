#include <stdio.h>

int main(){
    char sexo;
    int idade, pessoas = 0, homens = 0, mulheres = 0, obesos = 0, idosas = 0;
    int somaIdade = 0, qtdFilhos, somaIdFilhos, idFilho;
    float peso, mediaIdades, mediaIdFilhos = 0;

    do
    {
        printf("\nDigite a idade ou zero para finalizar:...\n");
        scanf("%d", &idade);
        if (idade != 0){
            printf("Digite o peso:");
            scanf("%f", &peso);
            getchar();
            printf("Sexo (F) ou (M) :");
            scanf("%c", &sexo);
            while ((sexo != 'F') && (sexo != 'M')){
                fflush(stdin);
                printf("ERROR! Digite (F) ou (M) : ");
                scanf("%c", &sexo);
            }
            printf("Quantidade de filhos: ");
            scanf("%d", qtdFilhos);
           
            if (qtdFilhos != 0){
                somaIdFilhos = 0;
                for(int n = 1; n <= qtdFilhos; n++){
                    printf("Idade (a) filho (a) %d", n);
                    scanf("%d, &idFilho");
                    somaIdFilhos += idFilho;

                    
                }
                mediaIdFilhos = (float) (somaIdFilhos / qtdFilhos);
            }
            if (sexo == 'F'){
                mulheres++;
                if(idade >= 60){
                    idosas++;
                }
            }
            else{
                homens++;
                if(peso>=80){
                    obesos++;
                }
            }
            somaIdade += idade;
            pessoas++;
            printf("Media da idade dos filhos: %.1f", mediaIdFilhos);
               mediaIdades = (float) somaIdade / pessoas;
        }
    } 

    while (idade != 0);
 
    printf("\nNumero de pessoas = %d", pessoas);
    printf("\nMedia das idades = %.1f", mediaIdades);
    printf("\nQuantidade de mulheres: %d", mulheres);
    printf("\nQuantidade de homens : %d", homens);
    printf("\nQuantidade de obesos: %d", obesos);
    printf("\nQuantidade de idosas: %d", idosas);
    printf("\n\n F I M \n\n");

    
}