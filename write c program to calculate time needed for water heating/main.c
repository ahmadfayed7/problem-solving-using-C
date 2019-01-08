#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , x;
    scanf("%d",&n);
    if(n>=0 && n<=30)
    {
        x=7;
    }
    else if(n>=30 && n<=60)
    {
        x=5;
    }
    else if(n>=60 && n<=90)
    {
        x=3;
    }
    else if(n>=90 && n<=100)
    {
        x=5;
    }
    else
        x= 0;
    printf("%d",x);
    return 0;
}
