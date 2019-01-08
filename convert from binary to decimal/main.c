#include <stdio.h>
#include <stdlib.h>

int main()
{    int n,dec=0,rem,w=1;
    printf("Enter the binary number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        rem = n%10;
        dec += w*rem;
        w *=2;
        n=n/10;
    }
    printf("%d",dec);
    return 0;
}
