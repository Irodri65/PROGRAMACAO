
#include <stdio.h>
#include <stdlib.h>

float main(float argc, char *argv[]){

    float a, Fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &a) ;


   Fahrenheit= (a* 1.8 + 32) ;

    printf("A temperatura equivalente em Fahrenheit e igual a %.2f",Fahrenheit);

    return 0;
}
