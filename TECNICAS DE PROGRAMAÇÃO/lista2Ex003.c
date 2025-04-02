#include <stdio.h>
#include <math.h>
#include <locale.h>


double total, nota, media;
int i;

double calcular_media(double media){
    return total/3;

}

int main(){
    for( i = 0; i<3; i++){
        printf("Digite sua nota\n");
        scanf("%lf", &nota);
        total+=nota;  
    }
    media = calcular_media(total);
        printf("Notas %.2lf\n", media);
}



