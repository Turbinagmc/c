
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

// Protótipos Métodos ou funções

void enqueue (int fila[MAX], int x);

int dequeue (int fila[MAX]);

void exibe (int fila[MAX]);

//variáveis globais
int final, inicio;

int main(int argc, char *argv[]) {

	int FilaNumA [MAX], FilaNumB [MAX];
	int n, i, resto;
	
	final = 0;
	inicio = 0;
	
	for (i=1; i <= MAX; i++)
	{
		printf("digite um numero: ");
		scanf("%d", &n);
		
		resto = n%2;
		
		//if(resto == 0)
			enqueue(FilaNumA, n);
		//else
		//	enqueue(FilaNumB, n);
	}
	
  printf("\n\nFila A\n");
	exibe(FilaNumA);
  //printf("\n\nFila B\n");
	//exibe(FilaNumB);
	for (i=1; i <= MAX; i++)
   {
    dequeue(FilaNumA);
    
    printf("\n\nFila A\n");
    exibe(FilaNumA);
   }

}

void exibe(int fila[MAX])
{
	int i;
	
	if(final>=1 && inicio < final)
	{
		for(i=inicio; i<final; i++)
			printf("\n fila [%d] = %d", i, fila[i]);
	}
	else
		printf("\n Fila Vazia!!!!");
}

int dequeue (int fila [MAX])
{
	int x;
	if (final >= 1 || inicio < final)
	{
		x = fila[inicio];
		inicio ++;
	}	
	else
		printf("\n Fila vazia!!!");
		
	return(x);
}

void enqueue(int fila[MAX], int x)
{
  if (final == MAX)
      printf("Fila Cheia!!!");
  else
  {
  	fila [final] = x;
  	final ++;
  }
}













