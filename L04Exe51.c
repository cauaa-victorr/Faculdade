#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main (){
    
    float bt, kb, mb, gb, tb,pb, hb;
    double graos = 1, somaG = 0.01, pesoT = 0;

    for(int i = 1; i < 65; i++){
        pesoT += graos * somaG / 100000;
        graos *= 2;
        
        printf("Qtd na casa %d __________________ %3f\n", i, graos*i);
        

    }
    printf("\n\nTotal do pagamento do monge: %3f\n\n\n", pesoT);

    bt = pesoT/8;
    kb = pesoT/1024;
    mb = pesoT/1048576;
    gb = pesoT/1073741824;
    tb = pesoT/1099511627776;
    pb = pesoT/1125899906842624;
    hb = pesoT/1152921504606846976;

    printf("\n\nPagamento do NERD:\n");
    printf("%f             bytes\n", bt);
    printf("  %f            kb\n", kb);
    printf("    %f          mb\n", mb);
    printf("      %f        gb\n", gb);
    printf("        %f      tb\n", tb);
    printf("          %f    pb\n", pb);
    printf("            %f  hexabytes\n", hb);

    printf("Pagamento TRABALHOR\n\n");
    printf("%f       Reais\n", pesoT/1);
    printf("%f       Mil reias\n", pesoT/1000);
     printf("%f       Milhoes de reias\n", pesoT/1000000);
      printf("%f       Bilhoes de reias\n", pesoT/1000000000);
       printf("%f       Trilhoes de reias\n", pesoT/1000000000000);
        printf("%f       Quadrilhoes de reais\n", pesoT/1000000000000000);
    

    }
    