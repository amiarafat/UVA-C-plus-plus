#include<stdio.h>
#include<string.h>

int main()
{
    int t,i,j;
    char a[10000];
    while(scanf("%d\n",&t)==1)
    {
    for(i=1;i<=t;i++)
    {
        gets(a);
        j=strlen(a);
        if(a[j-2]-48==3 && a[j-1]-48==5)
        printf("-\n");
        else if(a[0]-48==9&&a[j-1]-48==4)
        printf("*\n");
        else if(a[0]-48==1&&a[1]-48==9&&a[2]-48==0)
        printf("?\n");
        else
        printf("+\n");
        }
    }
return 0;
}
