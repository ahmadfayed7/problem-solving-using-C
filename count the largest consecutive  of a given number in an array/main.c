#include <stdio.h>
#include <stdlib.h>
 int find (int n , int *arr, int e)
 {
    int  counter=0 ,f_counter=0,i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==e)
        {
            counter++;
             if(counter>=f_counter)
                f_counter=counter;
        }
        else
        {

            counter = 0;
        }
    }
    return f_counter;
 }
int main()
{
    int n,i,x;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
     x=find(n,arr,3);
    printf("%d  ",x);
    return 0;
}
