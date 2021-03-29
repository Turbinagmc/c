#include <stdio.h>
#include <stdlib.h>

int main (void){
	
float a, b;
int opera,sair;

sair = 0;

while(sair==0)
	{
		
		
	printf("digite o primeiro valor:");	
	scanf("%f", &a);	
	
	printf("digite o segundo valor");
	scanf("%f", &b);
	
	printf("digite: 1-soma 2-subtracao 3-multiplicacao 4-divisao");
	scanf("%d", &opera);
	
	if(opera==1)
		printf("soma: %.2f", (a+b));	
	if(opera==2)
		printf("subtracao: %.2f", (a-b));	
	if(opera==3)
		printf("multiplicacao: %.2f", (a*b));	
	if(opera==4)
		printf("divisao: %.2f", (a/b));	
	
	switch(opera)	
	{
		case 1:
			printf("soma: %.2f", (a+b));
			break;
		case 2:
			printf("subtracao: %.2f", (a-b));
			break;	
		case 3:
			printf("multiplicacao: %.2f", (a*b));
			break;	
		case 4:
			printf("soma: %.2f", (a/b));
			break;	
		Default:
			printf("Operador Invalido!!!");	
			
				
		}
		printf("deseja realizar outra operacao?(1-nao/0-sim)\n");
		scanf("%d", &sair);	
	}
}
