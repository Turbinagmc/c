#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void main()
{
  int a;
  int b;
  int c;
  int d;
  int e;
  
  int *ptr;  // declara um ponteiro para um inteiro
             // um ponteiro para uma variável do tipo inteiro
  a = 90;
  b = 2;
  c = 3;
  c = 4;
  c = 5;
  
  ptr = &a;
  printf("Valor de ptr: %p, Conteúdo de ptr: %d\n", ptr, *ptr);
  printf("B: %d, C: %d,  d: %d,  e: %d,), b, c, d, e");
}
