
#include <stdio.h>
#include <stdlib.h>

float main(float argc, char *argv[]){

    float a, b, IMC;

    printf("Digite o peso: ");
    scanf("%f", &a) ;

    printf("Digite a altura: ");
    scanf("%f", &b) ;

   IMC= a/(b*b) ;

    printf("O IMC e igual a %.2f", IMC);

    return 0;
}
