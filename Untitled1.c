#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include<stdio.h>
// contagem de recursivo
void conta(int max, int n)
{
	if (n > max)
	{
		printf("cansei de contar\n");
			}
	else 
	{
		printf("%d\n", n);
		conta(max, n+1);
	}
}
int main()
{
	int max_count;
	printf("\n digite o valor até o qual você gostaria de contar: ");
	scanf("%d",&max_count);
	conta(max_count, 0);
	return 0;
}

