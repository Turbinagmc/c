#include<stdio.h>
#include<conio.h>

int multiplica(int N1, int N2)
{
  int resultado;
  resultado = N1 * N2;
  return(resultado); 
}

int main(void)
{
  int V1, V2, resultado;
  printf("Digite o primeiro valor:");
  scanf("%d", &V1);
  printf("Digite o segundo valor:");
  scanf("%d", &V2);
  
  resultado = multiplica(V1,V2);
  
  printf("Resultado = %d\n", resultado);
  
  getch();
  return 0;
}
