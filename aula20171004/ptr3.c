#include <stdio.h>
int main(){
    int vetor[] = {0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF};
    unsigned char * ponteiro;
    int nbytes = sizeof(vetor);
    int i, contagem = 0;
    printf ("End. inicial de vetor : %p\n", vetor);
    ponteiro = (unsigned char *) vetor;
    for(i=0 ; i < nbytes ; i++ ) {
            if(ponteiro[i])contagem++;
            printf("End.: %p, dado : %d, %X\n", ponteiro+i,ponteiro[i],ponteiro[i]);
            }
  printf("De %d bytes, %d estao com pelomenos um bit igual a 1.\n",nbytes,contagem);
  return 0;
}
