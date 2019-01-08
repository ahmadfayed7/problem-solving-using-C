#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int generate_saw_tooth()
{
    static int counter =0;
    counter++;
    if(counter>256)
        counter =1;
    return counter-1;
}
int main()
{   int n=1;
    while (1)
    {
      printf("%d  ",generate_saw_tooth());
      Sleep(1);
    }
    return 0;
}
