#include <stdio.h>
#include <stdlib.h>
int find_last_element (int size ,int* arr,int e)
{
    int found =-1,i;
    for(i=0;i<size;i++)
    {
        if(arr[i]==e)
        {
            found=i;
        }
    }
    return found;
}
int find_first_element (int size ,int* arr,int e)
{
    int found =-1,i;
    for(i=0;i<size;i++)
    {
        if(arr[i]==e)
        {
            found=i;
            break;
        }
    }
    return found;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
    printf("index is   :   %d\n",find_first_element(n,arr,4));
    return 0;
}
