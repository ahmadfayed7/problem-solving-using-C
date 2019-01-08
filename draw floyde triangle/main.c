#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,count=1,i,j=1,p=1;
    printf("Enter the number of raws\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        while (j<=count)
        {
            printf("%d ",p);
            p++;
            j++;
        }
        printf("\n");
        count++;
        j=1;
    }
    return 0;
}
