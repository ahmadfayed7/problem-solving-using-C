#include <stdio.h>
#include <stdlib.h>
char * lastletters(char *s)
{
    int l=0,i=0;
    while(s[i]!='\0')
    {
        l++;
        i++;
    }
    char * x =(char *)malloc(2);
    x[0]=s[l-2];
    x[1]=s[l-1];
  return x;

}
int main()
{
   char x[] ="ahmadfay";
   char * y = lastletters(x);
   int i;
   for(i=0;i<2;i++)
    printf("%c",y[i]);
    return 0;
}
