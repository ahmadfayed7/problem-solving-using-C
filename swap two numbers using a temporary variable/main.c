#include <stdio.h>
#include <stdlib.h>
void swap(int*x,int*y)
{
    int z;
    z=*y;
    *y=*x;
    *x=z;
}
int main()
{   int x=10,y=20;
    swap(&x,&y);
    printf("x= %d   and   y= %d",x,y);
    return 0;
}
