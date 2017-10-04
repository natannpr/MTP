#include<stdio.h>
int main(){
    int x,y,z;
    printf("Entre com dois numeros reais : ");
    scanf("%d%d",&x,&y);
    z = x+y;
    int vetor[] = {x,y,z};
    int * ponteiro;
    int i, contagem = 0;
    ponteiro =  vetor;
    for(i=0 ; i < 3 ; i++ ) {
            printf("End.: %p, dado : %d\n", ponteiro+i,ponteiro[i]);
            }
  return 0;
}
