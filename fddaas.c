#include <stdio.h>

int mdc(int n1, int n2);

int main()
{
  int n1;
printf("\n Digite um valor inteiro para calcular o mdc de um n�mero "); 
  scanf("%d",&n1);
}
 int n2;
 printf("\n Digite um valor inteiro para calcular o mdc de outro n�mero");
 scanf("%d",&n2);
  }
 mdc = Mdc(n);
printf("\n O valor do mdc de %d � %d", n, mdc); 
  return 0;
}

int mdc(int n1, int n2)
{
  if (n2==0)
    return n1;
  else 
  return mdc(n2, n1%n2);
}
