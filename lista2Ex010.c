#include <stdio.h>
#include <locale.h>
#include <math.h>

int n, p, resultado, resultadop, total, resultadot;
double com;

int calcular_fatorial(int c){
    resultado = 1;
        for (int i = n; i >= 1; i--) {
            resultado = resultado * i;
        }
        return resultado;
}
 int calcular_combinação(int p){
    resultadop = 1;
        for (int i = p; i >= 1; i--) {
            resultadop = resultadop * i;
        }
        return resultadop;
 }
 int calcular_total(int total){
    resultadot = 1;
        for (int i = n; i >= 1; i--) {
            resultadot = resultadot * i;
        }
        return resultadot;
 }

 double calcular_combin(double com){
    com = calcular_fatorial(resultado)/(calcular_combinação(resultadop)* calcular_total(resultadot));
    printf("Resultado da cmbinação\n", com);

 }

int main(){
    printf("Qauntos elementos serão combinados\n");
    scanf("%d", &n);
    printf("De qauntos em quantos?\n");
    scanf("%d", &p);
    total = n-p;
    calcular_combin(com);

}