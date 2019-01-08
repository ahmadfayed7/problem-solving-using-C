#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=0,n,q,rem,result=0,mult=1,c;
    printf("ENter the number\n");
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        q=q/10;
        count++;
    }
    q=n;
    c=count;
    while (q!=0)
    {
        rem=q%10;
        while(c!=0)
        {
            mult *=rem;
            c--;
        }
        result +=mult;
        q=q/10;
        c=count;
        mult=1;
    }
    if(result==n)
     printf("yes\n");
     else
      printf("NO\n");
    return 0;
}
