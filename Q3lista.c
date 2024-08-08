#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){

    int TB, GB, MB, BT ;
    

    setlocale( LC_ALL, "");

    printf("Digite o número de Terabyte");
    scanf("%d", &TB);

    GB = TB * 1000000;
    MB = TB * 1000;
    BT = TB * 1099511627776;

    printf(" O valor de %d terabyte em gigabytes é de %d\n", TB, GB);
    printf(" O valor de %d terabyte em megabytes é de %d\n", TB, MB);
    printf(" O valor de %d terabyte em bytes é de %d\n", TB, BT);

    return 0;
}