
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int a, b, area;

    printf("Digite o valor da base: ");
    scanf("%i", &a) ;

    printf("Digite o valor da altura: ");
    scanf("%i", &b) ;

   area= ((a*b)/2) ;

    printf("A area do triangulo e igual a %i",area);

    return 0;
}
