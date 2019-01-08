#include <stdio.h>
#include <stdlib.h>
int find_max (unsigned int x)
{
    int b[32],count=0,i,pre=0,f_count=0;
    while(count<32)
    {
        b[count]=x%2;
        x=x/2;
        count++;
    }
    count=f_count;
    for(i=0;i<32;i++)
    {
        if(b[i]==0)
        {
            if(pre==1)
                count++;

        }
        else
        {   if(count>f_count)
             {
                 f_count=count;
             }
            count=0;
            pre=1;
        }

    }
    return f_count;

}
int main()
{
    printf("%d\n",find_max(0b010101000100000010000100010010011));
    return 0;
}
