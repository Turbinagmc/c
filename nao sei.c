#include <stdio.h>
#include <stdlib.h>

int main (void){
	
float a, b;
int opera;	
	
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
				
}
