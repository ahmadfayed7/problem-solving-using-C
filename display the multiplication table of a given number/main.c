#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ,i;
    printf("enter any number:\n");
    scanf("%d",&x);
    for(i=1;i<13;i++)
    {
        printf("%d x %d = %d\n",i,x,i*x);
    }
    return 0;
}
