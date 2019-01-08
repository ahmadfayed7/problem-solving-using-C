#include <stdio.h>
#include <stdlib.h>

int main()
{   char c;
    int line_num,temp=1;
    FILE *fp1,*fp2;
    fp1= fopen("test1.txt","r");
    c=getc(fp1);
    while(c !=EOF)
    {
        printf("%c",c);
        c=getc(fp1);
    }
    rewind(fp1);
   printf("enter the number of line you want to delete :\n");
   scanf("%d",&line_num);
   fp2=fopen("test2.txt","w");
   c=getc(fp1);
   while(c !=EOF)
    {

         if(c=='\n')
           temp++;
     if(temp != line_num)
        putc(c,fp2);
     c=getc(fp1);
    }
   fclose(fp1);
   fclose(fp2);
   remove("test1.txt");
   rename("test2.txt","test1.txt");
    return 0;
}
