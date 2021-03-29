#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int topo;

void push(int pilha[MAX], int x)
{
	if (topo == MAX)
		printf("\n Pilha Cheia.");
	else
	{
		pilha[topo] = x;
		topo++;
	}
}

int pop(int pilha[MAX])
{
	int x;
	
	if (topo >= 1)
	{
		x = pilha [topo - 1];
		topo --;
	}
	else 
		printf("/n Pilha Vazia!!!!");
	
	return(x);
}

void exibe (int pilha [MAX])
{
	int i;
	
	if(topo >= 1)
	{
		for( i=0; i<topo; i++)
			printf("\n Pilha [%d] = %d", i, pilha[i]);
	}
	else
	{
		printf("\n Pilha Vazia!!!");
	}
}


int main()
{
	int pilha[MAX];
	int resp, n;
	
	resp =0;
	
	while (resp != 5)
	{
		printf ("*****  FILA  *****\n\n\n");

		printf ("   1 - PUSH\n");
		printf ("   2 - POP\n");
		printf ("   3 - EXIBIR\n");
		printf ("*************\n");
		printf ("   5 - SAIR\n\n\n");
		
		printf ("	Escolha uma opcao: ");
		scanf("%d", &resp);
		
		switch(resp)
		{
			case 1:
				printf("Digite um numero:");
				scanf("%d", &n);
				push (pilha, n);
				break;
			case 2:
				pop (pilha);
				break;		
			case 3:
				exibe (pilha);
				break;	
			case 5:

				break;	
			default:
				printf("Opcao Invalida !!!\n\n\n");				
		}
	
	}
	return 0;
}






