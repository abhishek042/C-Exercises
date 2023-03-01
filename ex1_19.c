#include<stdio.h>
#define MAXSTRING 1000

void reverse(char s[])
{
    int i=0,j;
    char rev[MAXSTRING];
    while(s[i++]!='\0');
    j=i-1;
    i=0;
    while(j>=0)
        rev[i++]=s[j--];
    i++;
    rev[i]='\0';
    j=0;
    while(j<i)
        {
            printf("%c",rev[j]);
            j++;
        }
    printf("%s\n",rev);
}
int main()
{
    reverse("HELLO abhi");
    char string[MAXSTRING];
    int c,i=0;
    while((c=getchar())!=EOF)
    {
        string[i++]=c;
        if(c=='\n'){
            string[i]='\0';
            reverse(string);
        }
    }
    return 1;
}