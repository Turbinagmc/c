#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
double x, pot;
printf("\n Digite um valor para x: "); 
  scanf("%lf",&x);
printf("\n Digite um valor inteiro para o expoente de x: "); 
  scanf("%d",&n);
if (n < 0)
{
    printf("\nIxi mano, n�o sei fazer conta com n < 0 n�o... tenta outro n�mero vai...\n");
return 0;
  }
pot = Pot(x, n);
printf("\n O valor de %6.3f elevado a %d � %6.3f", x, n, pot); 
  return 0;
}
