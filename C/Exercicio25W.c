int main(int argc, char *argv[]){
  int Num, Total, Multiplo;

Num= 5;
Multiplo= 1;

 while ( Multiplo <= 10 ){
  Total=Num*Multiplo;
  printf("\n%i x %i = %i\n", Num, Multiplo, Total);
  Multiplo = Multiplo + 1;
}

return 0;
}
