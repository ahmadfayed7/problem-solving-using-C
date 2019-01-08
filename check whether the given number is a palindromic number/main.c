#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,n1,i,res=0,rem;
    printf("enter number :\n");
    scanf("%d",&n);
    n1=n;
    while(n1>0)
    {
        rem=n1%10;
        res= res*10 +rem;
        n1=n1/10;
    }
    if(res==n)
        printf("the number is palindrome");
    else
        printf("the number is not palindrome");
    return 0;
}
