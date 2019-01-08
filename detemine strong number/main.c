#include <stdio.h>
#include <stdlib.h>
int factorial (int n)
{
    if(n==0)
        return 1;
    else
        return (n*factorial(n-1));
}
int main()
{
   int sum=0 ,count=0,c,i,n,q,rem;
   printf("ENTER NUMBER :\n");
   scanf("%d",&n);
   q=n;
   while(q!=0)
   {
       q=q/10;
       count++;
   }
   q=n;
   c=count;
   while(c!=0)
   {
       rem =q%10;
       sum += factorial(rem);
       c--;
       q=q/10;
   }
   if(sum==n)
    printf("YES\n");
   else
    printf("NO\n");
    return 0;
}
