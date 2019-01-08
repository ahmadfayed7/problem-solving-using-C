#include <stdio.h>
#include <stdlib.h>
int find(int n)
{   int c;
    while(n>1)
    {
        c=n%3 ;
        if(c>0)
          return 1;
        n=n/3;
    }
    return 0;

}
int main()
{   int n,f;
    scanf("%d",&n);
    f=find(n);
    printf("%d",f);
    return 0;
}
