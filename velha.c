#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define LINHAS 3
#define COLUNAS 3

int main(int argc, char *argv[]) {
	
	char tabuleiro [LINHAS][COLUNAS];
	int i, j;
	int jogada, pos;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			tabuleiro[i][j] = " ";
		}
	}
	
	// só pode ser exibido 1 vez
	printf ("___|___|___\n");
	printf ("___|___|___\n");
	printf ("   |   |   \n\n\n\n");
	
	
	printf ("Escolha a posição da jogada de acordo com o tabuleiro abaixo.\n\n\n");
	
	printf (" 1 | 2 | 3 \n");
	printf (" 4 | 5 | 6 \n");
	printf (" 7 | 8 | 9 \n\n\n\n");
	
	printf("Digite a posicao: ");
	scanf("%d", &pos);
	
	switch (pos)
	{
		case 1:
			tabuleiro[0][0] = "x";
			break;
		case 2:
			tabuleiro[0][1] = "x";
			break;
		case 3:
			tabuleiro[0][2] = "x";
			break;

		case 4:
			tabuleiro[1][0] = "x";
			break;
		case 5:
			tabuleiro[1][1] = "x";
			break;
		case 6:
			tabuleiro[1][2] = "x";
			break;
			
		case 7:
			tabuleiro[2][0] = "x";
			break;
		case 8:
			tabuleiro[2][1] = "x";
			break;
		case 9:
			tabuleiro[2][2] = "x";
			break;
		default:
			printf("Digite uma posição valida!!!");
	}
	
	printf (" %c | %c | %c \n", tabuleiro[0][0],tabuleiro[0][1],tabuleiro[0][2]);
	printf (" %c | %c | %c \n", tabuleiro[1][0],tabuleiro[1][1],tabuleiro[1][2]);
	printf (" %c | %c | %c \n\n\n\n", tabuleiro[2][0],tabuleiro[2][1],tabuleiro[2][2]);
	
	
	}
int main(int argc, char *argv[]) {
	
	char tabuleiro [LINHAS][COLUNAS];
	int i, j;
	int jogada, pos;
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			tabuleiro[i][j] = " ";
		}
	}
	
	// só pode ser exibido 1 vez
	printf ("___|___|___\n");
	printf ("___|___|___\n");
	printf ("   |   |   \n\n\n\n");
	
	
	printf ("Escolha a posição da jogada de acordo com o tabuleiro abaixo.\n\n\n");
	
	printf (" 1 | 2 | 3 \n");
	printf (" 4 | 5 | 6 \n");
	printf (" 7 | 8 | 9 \n\n\n\n");
	
	printf("Digite a posicao: ");
	scanf("%d", &pos);
	
	while(jogada < 10)
	
	{	printf ("Escolha a posição da jogada de acordo com o tabuleiro abaixo.\n\n\n");
	
	printf (" 1 | 2 | 3 \n");
	printf (" 4 | 5 | 6 \n");
	printf (" 7 | 8 | 9 \n\n\n\n");
	
	printf("Digite a posicao: ");
	scanf("%d", &pos);
	
	
	switch (pos)
	{
		case 1:
			tabuleiro[0][0] = "x";
			break;
		case 2:
			tabuleiro[0][1] = "x";
			break;
		case 3:
			tabuleiro[0][2] = "x";
			break;

		case 4:
			tabuleiro[1][0] = "x";
			break;
		case 5:
			tabuleiro[1][1] = "x";
			break;
		case 6:
			tabuleiro[1][2] = "x";
			break;
			
		case 7:
			tabuleiro[2][0] = "x";
			break;
		case 8:
			tabuleiro[2][1] = "x";
			break;
		case 9:
			tabuleiro[2][2] = "x";
			break;
		default:
			printf("Digite uma posição valida!!!");
	}
	
	printf (" %d | %c | %c \n", tabuleiro[0][0],tabuleiro[0][1],tabuleiro[0][2]);
	printf (" %d | %c | %c \n", tabuleiro[1][0],tabuleiro[1][1],tabuleiro[1][2]);
	printf (" %d | % | %c \n\n\n\n", tabuleiro[2][0],tabuleiro[2][1],tabuleiro[2][2]);
	
	jogada ++
	
	}
