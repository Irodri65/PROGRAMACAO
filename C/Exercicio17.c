#include <stdio.h>
 
int main(int argc, char *argv[]){
  int a, b, c;
  
  printf("\n Digite o primeiro valor: ");
  scanf("%i", &a);
 
  printf("Digite o segundo velor: ");
  scanf("%i", &b);
 
  printf("Digite o terceiro valor: ");
  scanf("%i", &c);
 
  if ( a > b )
  {
           if ( a > c )
            {
               if (a*a==((b*b)+(c*c)))
               {
                   printf("Triangulo retangulo!");
               }
               else
                {
                printf("Nao e um triangulo retangulo");  
                }
           }
           else if (c*c==((a*a)+(b*b)))
           {
            printf("Triangulo retangulo!");
           }
            else
            {
             printf("Nao e um triangulo retangulo");     
            }
 }
else if (b > c)
    {
        if (b*b==((a*a)+(c*c)))
        {
         printf("Triangulo retangulo!");  
        }
        else
        {
        printf("Nao e um triangulo retangulo"); 
        }
    }
else if (c*c==((c*c)+(c*c)))
    {
    printf("Triangulo retangulo!");
    } 
    else 
    {
   printf ("Nao e um triangulo retangulo");  
    }
  return 0;
}