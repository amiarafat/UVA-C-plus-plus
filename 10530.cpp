#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,i,j,k,l,num[15]={0};
    char a[15];
    while(scanf("%d",&n) && n>0)
    {
        getchar();
        gets(a);

        if(!strcmp(a,"too low"))
        {
            for(i=n;i>=1;i--)
            num[i]=-1;
        }
        else if(!strcmp(a,"too high"))
        {
            for(i=n;i<=10;i++)
            num[i]=-1;
        }
        else if(!strcmp(a,"right on") && num[n]==0)
        {
            printf("Stan may be honest\n");

            for(i=0;i<=10;i++)
            num[i]=0;
        }
        else if(!strcmp(a,"right on") && num[n]==-1)
        {
            printf("Stan is dishonest\n");

            for(i=0;i<=10;i++)
            num[i]=0;
        }


    }
}
