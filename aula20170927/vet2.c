#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main () {
    int numeros[N];
    int invertidos[N];
    int i;
    for(i=0;i<N;i++){
        printf("Entre com o numero o %d : ", (i+1));
        scanf("%d",&numeros[i]);
    }
    for(i=0;i<N;i++){
        invertidos[i] = numeros[N-i-1];
    }
    printf("Os numeros na ordem invertida sao : ");
    for(i=0;i<N;i++){
            printf(" %d, ",invertidos[i]);
    }
    return EXIT_SUCCESS;
}
