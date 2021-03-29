#include <stdio.h>
#include <stdlib.h>

int main(){
	
 int i, v[5];
 
 //captura os elementos
 
 for(i=0;i<5;i++){
 	
 printf("Elemento[%d]= ",i);
 
 scanf("%d",&v[i]);
 }
 //EXIBIR VALORES ORIGINAIS
 
 printf("\n::: Valores originais :::\n");
 
 for(i=0;i<5;i++)
 
 printf("%d\n",v[i]);
 
 //EXIBIR VALORES ORIGINAIS
 
 printf("\n::: Valores na ordem inversa :::\n");
 
 for(i=4;i>=0;i--)
 
 printf("%d\n",v[i]);
 
 return 0;
}

