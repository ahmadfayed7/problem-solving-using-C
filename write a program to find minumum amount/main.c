#include <stdio.h>
#include <stdlib.h>
int minumum(int n,int *arr)
{
    int min ,i,j ,price =arr[0] ,x;
    for(i=1;i<n;i++)
    {
         min=arr[0];
       for(j=0;j<i;j++)
       {

           if(arr[j]<min)
            min=arr[j];
       }
       x=arr[i];
       if(arr[i]>min)
       price+=arr[i]-min;
    }
    return price;

}
int main()
{
    int n,i,o;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    o=minumum(n,arr);
    printf("min is    :   %d\n",o);
    return 0;
}
