#include <stdio.h>
#include <locale.h>

void linhaAesteristicos(int asteriticos){
    for(int i = 0; i<= 25; i++)
        printf("*");
        printf("\n");
   }  
        
int main() {
    
    int tamanho = 25; 
    linhaAesteristicos(tamanho);
    printf("CMP 1048\n");
    linhaAesteristicos(tamanho);
    printf("Técnicas de Programação\n");
    linhaAesteristicos(tamanho);
    return 0;
}
