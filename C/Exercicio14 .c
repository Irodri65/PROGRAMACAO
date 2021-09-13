#include <stdio.h>
 
int main(int argc, char *argv[]){
  float a, b, c;
  
  printf("Digite o primeiro valor: ");
  scanf("%f", &a);
 
  printf("Digite o segundo valor: ");
  scanf("%f", &b);
  
  printf("Digite o terceiro valor: ");
  scanf("%f", &c);
  
  if ((a > b) && (a > c) ) {
      printf("O maior valor e %.2f", a);
  }

  else if ( b > c) {
    printf("O maior valor e %.2f", b);
  }

 
else {
    printf("O maior valor e %.2f", c);
}

  return 0;
}