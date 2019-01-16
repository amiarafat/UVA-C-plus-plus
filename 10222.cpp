#include<stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char s[100000];
    while(gets(s))
    {
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]==' ')
            printf(" ");
            else
            printf("%c",s[i]);
        }

    }
}
