#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<string.h>
#define N 256
int main() {
    int i;
    char frase[N]; char msg[2*N];
    printf("Entre com uma frase: ");
    fgets(frase,N,stdin); frase[strlen(frase)-1] = '\0';
    for(i=0;i<N;i++) frase[i] = toupper(frase[i]);
    printf("O tamanho da string: %d\n", strlen(frase));
    if(strncmp(frase,"BOM DIA",7) == 0)
        printf("Bom dia pra voce tambem!");
    else{ if(strncmp(frase,"TCHAU",7) == 0)
        printf("Saindo? Que pena...");
    else{
            strcpy(msg, "Voce quis dizer: ");
            strcat(msg, frase);
            strcat(msg, "?");
            printf("%s\n",msg);
    }
    }
}

