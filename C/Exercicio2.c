
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int a, area;

    printf("Digite o valor da aresta: ");
    scanf("%i", &a) ;

    //printf("Digite o valor da altura: ");
    //scanf("%i", &b) ;

   area= (a*a) ;

    printf("A area do quadrado e igual a %i",area);

    return 0;
}
