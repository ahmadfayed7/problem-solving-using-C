#include <stdio.h>
#include <stdlib.h>
int find(int x)
{  int c;
   while (x>1)
   {
    c=x%2;
    if(c>0)
        return 0;
    x=x/2;
   }
  return 1;
}
int main()
{
    printf("%d\n",find(1));
    printf("%d\n",find(4));
    printf("%d\n",find(32));
    printf("%d\n",find(5));
    printf("%d\n",find(6));
    printf("%d\n",find(9));
    return 0;
}
