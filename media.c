#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n1, n2, n3, n4, media;
	
	printf("Digite a nota 1");
	scanf("%f", &n1);
	printf("Digite a nota 2");
	scanf("%f", &n2);
	printf("Digite a nota 3");
	scanf("%f", &n3);
	printf("Digite a nota 4");
	scanf("%f", &n4);

	media = (n1*n2*n3*n4)/4;
	
	if(media < 7)
	{
		printf("media: %.2f", media);
		printf("se fudeu");
	}
		else
		{
			printf("se fudeu ao quadrado");
		}
	
	return 0;
}
