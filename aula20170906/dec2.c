#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    srand(time(0)); // semente
    int num,num2=8192,x=0,y=rand()%100,min=1328,max=1360,num3,num4;
    int z = min + rand() %(max-min+1);
    int h = rand()%100;
    printf("Coloque um numero que seja divisor do numero 8192 : ");
    scanf("%d",&num);
    if(num2%num == 0){
          x = x+1;
       printf("\n Resposta certa ! Voce ja tem %d ponto ! \n", x);

    }
    printf("\n Pegue o numero %d some 101 e me de o valor da soma: ", z);
      scanf("%d",&num3);
      if(num3 == (z+101)){
            x = x+1;
       printf("\n Resposta certa ! Voce ja tem %d ponto ! \n", x);
      }

       printf("\n Pegue o numero %d multiplique por 3 e me de o resultado : ", h);
       scanf("%d",&num4);
       if(num4 == (h*3)){
            x = x+1;
       printf("\n Resposta certa ! Voce ja tem %d ponto ! \n", x);
       }
    printf("\n Sua pontuacao foi : %d \n Progama feito pelo Aluno : Natan Paranaiba Ribeiro \n"),x;
    return 0;
}
