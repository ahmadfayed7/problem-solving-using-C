#include <stdio.h>
#include <stdlib.h>
char * pangram(char * s)
{
  char * ss =(char*)malloc(26);
  int i =0 ,j=97,k=0,c;
  for(c=0;c<26;c++)
    ss[c]='0';
  while(i<26)
  {
    while (s[k]!='\0')
    {
      if(s[k]==j)
      {
          ss[i]='1';
          break;
      }
      k++;
    }
    i++;
    j++;
    k=0;
  }
  return ss;
}
int main()
{
    char x[]="the quick brown fox jumps over the lazy dog";
    char *y =pangram(x);
    int i;
    for(i=0;i<26;i++)
    printf("%c ",y[i]);
    return 0;
}
