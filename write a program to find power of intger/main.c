#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,e,t;
    double p2 =1.0,p1=1;
    printf("enter number:\n");
    scanf("%d",&n);
    printf("enter number:\n");
    scanf("%d",&e);
    t=e;
    if(t>=0)
    {
        while(t!=0)
        {
            p1*= n;
            t--;
        }
        printf("%.1f",p1);
    }
    else
    {
        t *=-1;
       while(t!=0)
        {
            p2*= (1.0/n);
            t--;
        }
        printf("%.10f",p2);
    }

    return 0;
}
