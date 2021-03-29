#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define linhas 3
#define colunas 4


int main(int argc, char *argv[]) {
	
	int matriz [linhas][colunas];
	int i, j, soma;
	
	soma = 0;
	
	//recebe os dados da matriz
	for (i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			
	
		printf("digite um valor para matriz[%d][%d]:", i,j);
		scanf("%d", &matriz[i][j]);}
	}
	
	//print os dados na tela e exibi a soma
	for (i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{	
			printf("matriz[%d][%d]: %d - ", i ,j , matriz[i][j]);
			
			if(matriz[i][j] == 0)
			{
				soma++;
			}
		}
		printf("\n");
	}
	printf("a quantidade de zeros na matriz eh: %d." , soma);
}
