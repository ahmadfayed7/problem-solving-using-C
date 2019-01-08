#include <stdio.h>
#include <stdlib.h>
void reverse_arr(int s, int*arr)
{
    int i,j,temp;
    for (i=0 ,j=s-1;i<j;i++,j--)
    {
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }

}
int main()
{    int n,i ;
     scanf("%d",&n);
     int arr[n];
     for (i=0;i<n;i++)
      scanf("%d",&arr[i]);
    reverse_arr(n,arr);
    for (i=0;i<n;i++)
      printf("%d  ",arr[i]);
    return 0;
}
