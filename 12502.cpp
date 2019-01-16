#include<stdio.h>
int main()
{
    int t,n,i,a,b,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        n=c*(2*a-b)/(a+b);
        printf("%d\n",n);
    }

return 0;
}
