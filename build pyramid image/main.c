#include <stdio.h>
#include <stdlib.h>

int main()
{  int spaces,n,n1=1,i;
    printf("enter base number\n");
    scanf("%d",&n);
    spaces =n/2+1;
    printf("\n");
    while(n1<=n)
    {
        for(i=0;i<spaces;i++)
            printf(" ");
        for(i=0;i<n1;i++)
            printf("*");
        printf("\n");
        spaces--;
        n1+=2;
    }

    return 0;
}
