#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main () {
    float a,b,angulo,c;
    printf("Entre com o tamanho dos lados : a , b . E o angulo formado entre eles : " );
    scanf("%f%f%f",&a,&b,&angulo);
    c= sqrt(pow(a,2)+pow(b,2)- 2*a*b*cos(angulo));
    printf("O tamanho do lado c do triangulo e : %f", c);
    return EXIT_SUCCESS;
}
