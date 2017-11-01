#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float media(float * numeros, int qntd){
    float m = 0.0f;
    int i;
    for(i = 0; i < qntd; i++) m += numeros[i];
    m /= qntd;
    return m;
}
float desviopadrao(float * numeros , int qntd) {
    float m = media(numeros,qntd);
    float dp = 0.0f;
    int i;
    for (i=0;i<qntd;i++) dp += pow(numeros[i]-m,2);
    dp/= qntd-1;

    return sqrt(dp);

}
int main() {
    int qntd,i;
    float * numeros;
    printf("Quantos numeros voce precisa? ");
    scanf("%d", &qntd);
    numeros = (float *) malloc(qntd*sizeof(float));
    for(i=0; i<qntd; i++)
    {
        printf("Entre com o %do numero: ", i+1);
        scanf("%f", numeros+i);
    }
    printf("A media dos numeros e : %f\n", media(numeros,qntd));
    printf("O desvio padrao dos numeros e : %f\n", desviopadrao(numeros,qntd));
    free(numeros);
    system ("pause");
    return 0;
}
