#include <stdio.h>
#include <stdlib.h>
int str_cmp (char a[],char b[])
{   int i=0;
    while(a[i]!='\0'||b[i]!='\0')
    {
        if(a[i]!=b[i])
            return 0;
        else
            i++;
    }
    return 1;
}
int main()
{
   char a[]="hello";
    char b[]="hello";
    if(str_cmp(a,b))
        printf("equal\n");
    else
        printf("not");
    return 0;
}
