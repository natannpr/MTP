#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
    int numero;
    int i;
    printf("Entre com numero:");
    scanf("%d", &numero);
    for(i = 2; i < numero; i++) {
        if (numero%i == 0)
            break;
    }
    if (i == numero)
            printf("E um numero Primo ! \n");
    else
            printf("Nao e um numero primo ! \n");

    return 0;

}


