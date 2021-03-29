#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
main()
{
    int i=34,j;
int *p;
p = &i;
*p++;
j = *p + 33;
}
