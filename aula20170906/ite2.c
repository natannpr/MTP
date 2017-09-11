#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
    int num1, i, base, pot, res;
    printf(" Coloque o valor da base e da potencia respectivamente : ");
    scanf("%d%d", &base, &pot);
    res = base;
    for(i = 1; i < pot; i++)
    {
        res = res*base;
    }
    printf(" O valor de %d elevado a %d e igual a : %d . \n Progama feito por : Natan Paranaiba Ribeiro \n",base,pot,res);
   return 0;

}


