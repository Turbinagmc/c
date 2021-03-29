#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	float soma;
	int i;
	float notas[4];
	
	for(i=0; i <4; i++);
	{
				//receber valores que serao inseridos no vetor
				printf("digite a nota %d:", i);
				scanf("%f", &notas[i]);
				
				//soma dos valores existentes no vetor 
				soma = soma + notas[i];
	}
	//exibir a media dos valores existentes no vetor
	
	printf("a media das notas é %.2f:", (soma/4));
}
