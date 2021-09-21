int main(int argc, char *argv[]){
  int numero;
  
  printf("Digite um numero positivo: ");
  scanf("%i", &numero);
 
 while (numero <= 0) {
    printf("\nErro! Digite apenas numeros positivos! Digite novamente: ");
    scanf("%i", &numero);
}
printf("Obrigado!" );
 
  return 0;

}


