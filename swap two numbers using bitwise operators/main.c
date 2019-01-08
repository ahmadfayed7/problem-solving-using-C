#include <stdio.h>
#include <stdlib.h>
void swap (int *x, int *y)
{
    *x=*x^*y;
    *y=*x^*y;
    *x=*x^*y;
}
int main()
{   int x=10,y=20;
    swap(&x,&y);
    printf("x= %d    and y=  %d\n",x,y);
    return 0;
}
