#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
    int numero, i, fatorial;
    printf("Entre com numero:");
    scanf("%d", &numero);
    fatorial = 1;
    for(i = 0; i < numero; i++)
        fatorial = fatorial*(numero-i);
    printf("O valor de %d! e igual a %d . \n", numero, fatorial);
   return 0;

}


