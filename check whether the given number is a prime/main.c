#include <stdio.h>
#include <stdlib.h>
int prime_num(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
        if(n%i==0)
        c++;
    if(c==2)
        return 1;
    else
        return 0;
}
int main()
{   int x;
    printf("enter the number\n");
    scanf("%d",&x);
    if(prime_num(x))
      printf("%d  is a prime number\n",x);
    else
      printf("%d  is not a prime number\n",x);
    return 0;
}
