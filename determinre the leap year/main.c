#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter year\n");
    scanf("%d",&n);
    if(n%400==0)
      printf("is a leap year\n");
    else if(n%100==0)
         printf("is a not leap year\n");
    else if (n%4==0)
          printf("is a leap year\n");
    else
         printf("is a not leap year\n");
    return 0;
}
