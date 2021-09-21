int main(int argc, char *argv[]){
  int Num, Total, Multiplo;

  printf("\nDigite um numero positivo!: ");
  scanf("%i", &Num);
 
 while (Num <= 0 ) {
  printf("\nErro! Digite um numero positivo!: ");
  scanf("%i", &Num);
 }

 Multiplo = 1;

 while ( Multiplo <= 10 ){
  Total=Num*Multiplo;
  printf("\n%i x %i = %i\n", Num, Multiplo, Total);
  Multiplo = Multiplo + 1;
}

return 0;
}
