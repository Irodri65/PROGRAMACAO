#include <stdio.h>
 
int main(int argc, char *argv[]){
  int a, b, c;

  
  printf("Digite o primeiro valor: ");
  scanf("%i", &a);
 
  printf("Digite o segundo valor: ");
  scanf("%i", &b);

  printf("Digite o terceiro valor: ");
  scanf("%i", &c);


  if ((( a + b ) > c ) &&
      (( a + c ) > b ) &&
      (( b + c ) > a ) ){
      
      if ((a == b) && (a == c)){
          printf("\nTriangulo Equilatero" );
      }
      else if (( a != b ) && (a != c )) {
        printf("\nTriangulo Escaleno" );
      }
      else{
        printf("\nTriangulo Isoceles" );
      }
}
      else{
        printf("\nNao e um triangulo" );
        }
  return 0;

}


