#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
    int num1, i,num2 = 0;
    printf("Entre com o numero que voce deseja saber se e perfeito : ");
    scanf("%d", &num1);
    for(i = 1; i < num1; i++){
            if(num1%i == 0){
                num2 = num2+i; }}
                if(num1==num2){
                        printf("\n O numero e perfeito ! ");
                }
                else{
                    printf("\n O numero nao e perfeito ! ");
                }
   return 0;

}




