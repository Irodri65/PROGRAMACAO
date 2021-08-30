#include <stdio.h>
 
int main(int argc, char *argv[]){
  float altura, base, area;
  
  printf("Digite o valor da base: ");
  scanf("%2f", &base);
 
  printf("Digite o valor da altura: ");
  scanf("%2f", &altura);

  area = base * altura;
  
  if ( area >= 100) {
      printf("Terreno Grande! Area igual a %.2f" , area );
  }

  
  else {
    printf("Terreno Pequeno! Area igual a %.2f" , area );
  }
 
  return 0;
}


