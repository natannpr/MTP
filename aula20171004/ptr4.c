#include<stdio.h>
int main(){
    float x,y,z;
    printf("Entre com dois numeros reais : ");
    scanf("%f%f",&x,&y);
    z = x+y;
    float vetor[] = {x,y,z};
    float * ponteiro;
    int i;
    ponteiro =  vetor;
    for(i=0 ; i < 3 ; i++ ) {
            printf("End.: %p, dado : %f \n", ponteiro+i,ponteiro[i]);
            }
  return 0;
}
