int main(int argc, char *argv[]){
  int a, b;
  
  printf("Digite o primeiro valor: ");
  scanf("%i", &a);
  
  printf("Digite o segundo valor: ");
  scanf("%i", &b);
 
 while (a > b) {
    printf("\nErro! O segundo valor deve ser maior que o primeiro! Digite novamente o segundo valor: ");
    scanf("%i", &b);
}
printf("Obrigado!" );
 
  return 0;

}


