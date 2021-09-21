#include <stdio.h>
 
int main(int argc, char *argv[]){
  float P, A, IMC;
  char sexo;
  
  printf("\nDigite o seu peso: ");
  scanf("%f", &P);
 
  printf("Digite a sua altura: ");
  scanf("%f", &A);
 
  printf("Digite o seu sexo: ");
  scanf("%s", &sexo);

  IMC = P / (A*A);
 
  if ( sexo == 'M' )
    if ( IMC >= 20 && IMC < 25 )
    printf("\nPeso idel!" );

        else 
        printf("\nNao esta no peso ideal!" );
        
    if ( sexo == 'F' )
        if ( IMC >= 19 && IMC < 24 )
    printf("\nPeso idel!" );

        else 
        printf("\nNao esta no peso ideal!" );

        return 0;
}

          