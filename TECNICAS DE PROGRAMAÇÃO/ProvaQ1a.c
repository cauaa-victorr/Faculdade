#include <stdio.h>

double receber_troco(double valor) {
    int moedas[] = { 200, 100, 50, 25, 10, 5, 1}, qtd;
    
    int centavos =(sizeof valor * 100);
    
    for (int i = 0; i < 7; i++) {
        qtd = centavos / moedas[i]; 
        if (qtd > 0) {
            printf("Moeda de R$ %.2f: %d\n", moedas[i] / 100.0, qtd);
        }
        centavos %= moedas[i];  
    }
}

int main() {
    double troco;
    
    printf("Digite o valor do troco: ");
    scanf("%lf", &troco);
    
    receber_troco;
    
    return 0;
}
