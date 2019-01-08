#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp1,*fp2;
    char c;
    int line_num,temp=1;
    fp1=fopen("test1.txt","r");
    c=getc(fp1);
    while(c!=EOF)
    {
        printf("%c",c);
        c=getc(fp1);
    }
    printf("\n");
    fp2=fopen("test2.txt","w");
    printf("enter the number of the line you want to delete:\n");
    scanf("%d",&line_num);
    rewind(fp1);
    c=getc(fp1);
    while(c!=EOF)
    {   if(c=='\n')
            temp++;
       if(temp != line_num)
        putc(c,fp2);
       else
       {
           while((c=getc(fp1))!='\n'){}
          printf("enter your new line\n");
           fflush(stdin);
           putc('\n',fp2);
           while ((c=getchar())!='\n')
            putc(c,fp2);
            putc('\n',fp2);
           temp++;

       }
       c=getc(fp1);
    }
    fclose(fp1);
    fclose(fp2);
    remove("test1.txt");
    rename("test2.txt","test1.txt");
    fp1=fopen("test1.txt","r");
    c=getc(fp1);
    while(c!=EOF)
    {
        printf("%c",c);
         c=getc(fp1);
    }
    fclose(fp1);
    return 0;
}
