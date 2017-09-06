#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("Entre com um numero :  ");
    scanf("%d",&num);
    if(num%2)
    {
        printf("Numero impar.\n");
        if (num%5 == 0)
            printf ("Numero multiplo de 5. \n");
            else
            printf ("Numero nao e multiplo de 5. \n");
    }
    else
    {
        printf("Numero par. \n");
        if (num%3 == 0)
            printf ("Numero multiplo de 3. \n");
        if (num%7 == 0)
            printf ("Numero multiplo de 7. \n");
            else
                printf ("Numero nao e multiplo de 3 nem de 7. \n");
    }
    printf("\n Progama feito pelo Aluno : Natan Paranaiba Ribeiro \n");
    return 0;
}
