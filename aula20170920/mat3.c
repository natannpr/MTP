#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main () {
    float resultado;
    int num,base;
    printf("Entre com o numero e a base respectivamente : " );
    scanf("%d%d",&num,&base);
    resultado =log(num)/log(base);
    printf("O resultado e : %f", resultado);
    return EXIT_SUCCESS;
}
