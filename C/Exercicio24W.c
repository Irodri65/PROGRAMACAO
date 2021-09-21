int main(int argc, char *argv[]){
  char sexo;
  
  printf("Digite o sexo do usuario: ");
  scanf("%s", &sexo);
  

 
 while ((toupper(sexo)!='M') && (toupper(sexo)!='F')) {
    printf("\nErro! Digite novamente!: ");
    scanf("%s", &sexo);
}
printf("Obrigado!" );
 
  return 0;

}
