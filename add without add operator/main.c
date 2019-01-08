#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b,sum,carry;
    scanf("%d%d",&a,&b);
    while(b!=0)
    {
        sum = a^b;
        carry=(a&b)<<1;
        a=sum;
        b=carry;
    }
    printf("%d",sum);
    return 0;
}
