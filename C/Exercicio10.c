#include <stdio.h>
 
int main(int argc, char *argv[]){
  float a, b;
  
  printf("Digite o primeiro valor: ");
  scanf("%2f", &a);
 
  printf("Digite o segundo valor: ");
  scanf("%2f", &b);
  
  if (a > b) {
      printf("O menor valor e %.2f", b);
  }

  else{
    printf("O menor valor e %.2f", a);
  }
 
  return 0;
}

