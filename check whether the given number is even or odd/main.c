#include <stdio.h>
#include <stdlib.h>
int check_even_odd(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}
int main()
{
    int x;
    scanf("%d",&x);
    if(check_even_odd(x))
    printf("even");
    else
    printf("odd");
    return 0;
}
