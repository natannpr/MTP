#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    float base, altura,area;
    printf("Entre com a base do triangulo e sua altura respectivamente :  ");
    scanf("%f %f", &base, &altura);
    area = (base*altura)/2;
    printf("Area do triangulo %.2f\n Progama feito pelo Aluno : Natan Paranaiba Ribeiro \n",area);
    return 0;
}
