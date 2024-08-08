#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main (){
    int n, i;


    for ( n = 1; n <= 10; n++)
    {
        printf("**Tabuada de %d\n",n);
        for ( i = 1; i <=10; i++)
        {
            printf("%d  x  %d  =  %d\n", i, n, i*n);
        }
        
    }
    
    }