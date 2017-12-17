#include <stdio.h>
#include <stdlib.h>
#define N 256
int main () {
    char frase[N];
    int i,x=0;
    printf("Entre com uma frase: \n");
    fgets(frase,N,stdin);
    for(i=1;frase[i] != '\0';i++){
            if(frase[i] != '!' && frase[i] != '?' && frase[i] != '.' && frase[i] != ' ' && frase[i] != '\0'){
            x++;}
    else {}
}   printf("O numero de letras e : %d",x);
    return EXIT_SUCCESS;
}
