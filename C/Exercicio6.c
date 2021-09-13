
#include <stdio.h>
#include <stdlib.h>

float main(float argc, char *argv[]){

    float a, b, REAL;

    printf("Digite a cotacao do Dolar: ");
    scanf("%f", &a) ;

    printf("Digite o valor em Dolar: ");
    scanf("%f", &b) ;

   REAL= (a * b) ;

    printf("%f dolares equivale a %.2f reais",b,REAL);

    return 0;
}
