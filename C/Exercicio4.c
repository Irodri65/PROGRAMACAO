
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int a, b, c, d, media;

    printf("Digite o primeiro valor: ");
    scanf("%i", &a) ;

    printf("Digite o segundo valor: ");
    scanf("%i", &b) ;

    printf("Digite o terceiro valor: ");
    scanf("%i", &c) ;

    printf("Digite o quarto valor: ");
    scanf("%i", &d) ;

   media= ((a+b+c+d)/4) ;

    printf("A media dos valores apresentados e igual a %i",media);

    return 0;
}
