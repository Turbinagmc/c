#include <iostream>
#include <math.h>
#define SIZE 100

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int v[SIZE];
	
	void geraAleatorios(v);
	int k;
	for(k=0;k<size; k++)
	printf("%d \n", v[k]);
	return 0;

void geraAleatorios(int vec[])
{
	int i;
	for?(i= 0; i< SIZE; i++)
	{
		int num = (int)(rand()/1000+1);
		vec[i] = num;

	}
}
