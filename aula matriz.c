#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int matriz [3][4] = {
							{1,2,3,4},
							{11,5,7,9},
							{12,8,13,14}
						};
	int i,j;//contadores
	
	for (i=0; i<3; i++)//ira ler as linhas da matriz
	{
		for(j=0; j<4; j++)//ira ler as colunas da matriz
		{
			printf ("matriz [%d][%d] : %d \n" ,i ,j , matriz[i][j]);
				
		}
		
		
	}

}
