#include<stdio.h>

int main()
{
    int string[100],c,nl=0,i=0,space=0,tab=0;
    while((c=getchar())!=EOF)
    {
        string[i]=c;
        i++;
        if(c=='\n')
            nl++;
        if(c==' ')
            space++;
        if(c==' ')
            tab++;
    }

    printf("No of lines are %d\n",nl);
    printf("No of Tabs are %d\n",tab);
    printf("No of space are %d\n",space);
    /*for(i=0;string[i]!=EOF;i++)
        putchar(string[i]);
    */
    return 0;
}