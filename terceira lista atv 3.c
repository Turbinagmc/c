#include <stdio.h>
#include <stdlib.h>
int main(){
 int x , y;
 int *ptr = &x;
 *ptr = 14;
 y = *ptr;
 
 printf("x == %d\n", x);
 printf("y == %d\n", y);
 
 getch();
 return 0;
}

