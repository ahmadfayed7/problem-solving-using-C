#include <stdio.h>
#include <stdlib.h>
int * find(int l,int r ,int* n)
{
    int *output,i;
  if(l>=r)
  {
    *n=2;
    output=(int*)malloc(sizeof(int)*(*n));
    output[0]=0xff;
    output[1]=0xff;
  }
  else
  {
      *n = r-l-1;
      output=(int*)malloc(sizeof(int)*(*n));
      for(i=0;i<*n;i++)
      {
         output[i]=r-1;
         r--;
      }

  }
  return output;
}
int main()
{
    int l,r,n,i;
    int *output;
    scanf("%d",&l);
    scanf("%d",&r);
    output=find(l,r,&n);
    for(i=0;i<n;i++)
    printf("%d  \n",output[i]);
    return 0;
}
