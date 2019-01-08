#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int get_len(char  a[])
{
    int l=0,i;
    for(i=0;i<100;i++)
        if(a[i]=='\0')
          break;
        else
          l++;
    return l;

}
int main()
{
    char s[20],l,l2,i,flag=0;
    scanf("%s",s);
    l=strlen(s);
    l2=get_len(s);
    for(i=0;i<l;i++)
        if(s[i]!=s[l-i-1])
          {
            flag=1;
            break;
          }
    if(flag)
    printf("is not palindrome");
    else
    printf("is  palindrome");
    return 0;
}
