#include <stdio.h>
#include <stdlib.h>
int factorial_itertively(int n)
{   int i,r=1;
    if(n<=0)
        return 1;
    else
    {
    for(i=n;i>0;i--)
        r=r*i;
    }
    return r;
}
int factorial_recursion(int n)
{
    if(n<=0)
      return 1;
    else
      return n*factorial_recursion(n-1);
}
int main()
{
    int x;
    scanf("%d",&x);
    printf("factorial of %d is  %d\n",x,factorial_recursion(x));
    return 0;
}
