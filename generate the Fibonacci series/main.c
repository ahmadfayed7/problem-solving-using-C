#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,ll=0,l=1,t;
    printf("enter limit num\n");
    scanf("%d",&n);
    printf("0  1  ");
    while(l<n)
    {
        printf("%d  ",l+ll);
        t=l;
        l=l+ll;
        ll=t;
    }
    return 0;
}
