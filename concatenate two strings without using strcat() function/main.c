#include <stdio.h>
#include <stdlib.h>
int str_len(char a[])
{
    int i=0;
    while(a[i]!='\0')
    {
        i++;
    }
    return i;
}
char* str_cat(char *a,char *b)
{
    int h ,i,j,l1,l2,c=0 ;
    char *temp;
     l1=str_len(a);
     l2=str_len(b);
     h=l1+l2+1;
    temp =(char*)malloc(h);
    for(i=0;i<l1;i++)
        temp[i]=a[i];
     for(j=i;j<h;j++)
        temp[j]=b[c++];
     temp[h-1]='\0';
    return temp;
}

int main()
{
    char a[]="ahmad";
    char b[]="fayed";
    printf(" %s\n",str_cat(a,b));
    return 0;
}
