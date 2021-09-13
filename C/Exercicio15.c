#include <stdio.h>
 
float main(float argc, char *argv[]){
  float peso, altura, r;
  
  printf("Digite o valor da peso: ");
  scanf("%f", &peso);
 
  printf("Digite o valor da altura: ");
  scanf("%f", &altura);

  r = peso/(altura*altura);
  
  if ( r < 20) {
      printf("ABAXO DO PESO" );
  }

  else if (r >= 25) {
      printf("ACIMA DO PESO" );
  }

  else if (20 <= r < 25) {
    printf("PESO IDEAL" );
  }
 
  return 0;

}


