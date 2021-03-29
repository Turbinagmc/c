#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num;
	
	printf("Digite um numero");
	scanf("%d", &num);
	
	if(num < 100)
		printf("menor do que 100");
	else
		printf("maior do que 100");
	
	return 0;
}
