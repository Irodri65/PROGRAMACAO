
#include <stdio.h>
#include <stdlib.h>

float main(float argc, char *argv[]){

    float a, b, c, d, e, f, troco;

    printf("Digite o valor do primeiro produto: ");
    scanf("%f", &a) ;

    printf("Digite o valor do segundo produto: ");
    scanf("%f", &b) ;

    printf("Digite o valor do terceiro produto: ");
    scanf("%f", &c) ;

    printf("Digite o valor do quarto produto: ");
    scanf("%f", &d) ;

    printf("Digite o valor do quinto produto: ");
    scanf("%f", &e) ;

    printf("Digite o valor pago: ");
    scanf("%f", &f) ;

   troco= (f-(a+b+c+d+e)) ;

    printf("Devera ser dado de troco o valor de %.2f reais",troco);

    return 0;
}
