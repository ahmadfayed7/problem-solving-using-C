#include <stdio.h>
#include <stdlib.h>
int Right_c_shif(int n,int t ,int* output)
{
    if(t>32)
    {
        *output = n;
        return 0xff;
    }
    else
    {
        *output = n>>t  |  n<<((8*sizeof(n))-t) ;
    }
}
int Left_c_shif(int n,int t ,int* output)
{
    if(t>32)
    {
        *output = n;
        return 0xff;
    }
    else
    {
        *output = n<<t  |  n>>((8*sizeof(n))-t) ;
    }
}

int main()
{
    int n;
    int output;
    scanf("%d",&n);
    if(Right_c_shif(n,5,&output))
    printf("%d",output);
    return 0;
}
